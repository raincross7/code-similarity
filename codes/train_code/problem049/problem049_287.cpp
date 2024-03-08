#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>
#include<iterator>
#include<queue>
#include<set>

using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0;i<(int)(n);i++)

class Graph{
    public:
    typedef struct Edge{
        ll from, to, cost;
        Edge(ll f, ll t, ll c): from(f),to(t),cost(c){}
    } Edge;

    bool isDirected;
    ll INF = 1LL << 62;
    ll v; // 頂点数
    std::vector<Edge> edges;  // 辺のリスト
    std::vector<std::vector<std::pair<ll,ll>>> list;  // 隣接リスト
    //std::vector<std::vector<ll>> matrix; // 隣接行列

    Graph() : isDirected(false){ init(0); }
    Graph(ll n, bool isDirected=false) : isDirected(isDirected) { init(n); }
    void init(ll n){
        v=n;
        edges.clear();
        list.assign(n, std::vector<std::pair<ll,ll>>());
        //matrix.assign(n, std::vector<ll>(n, INF));
    }
    void connect(ll from, ll to){
        con(from, to, 1);
        if(!isDirected) con(to, from, 1);
    }
    void connect(ll from, ll to, ll cost){
        con(from, to, cost);
        if(!isDirected) con(to, from, cost);
    }
    void con(ll from, ll to, ll cost){
        edges.push_back(Edge(from,to,cost));
        list[from].push_back(std::make_pair(to, cost));
        //matrix[from][to] = cost;
    }
};

class StronglyConnectedComponents{  // 強連結成分分解
    public:
    std::vector<std::vector<ll>> list, rlist;
    Graph G;
    std::vector<ll> order; // 帰りがけ順の並び
    std::vector<ll> used;
    std::vector<ll> cmp;   // 属する強連結成分のトポロジカル順序
    std::vector<std::vector<ll>> nodes; // sccの各ノードに属する頂点集合
    Graph Gscc;    // 強連結成分を縮約したDAG 各vに属する頂点集合はnodes[v]
    ll node_num;

    StronglyConnectedComponents(Graph G) : G(G){
        list.assign(G.v, std::vector<ll>());
        rlist.assign(G.v, std::vector<ll>());
        order.clear();
        used.assign(G.v, 0);
        cmp.assign(G.v, -1);
    }

    void make_list(){
        for(auto i : G.edges){
            list[i.from].push_back(i.to);
            rlist[i.to].push_back(i.from);
        }
    }
    void dfs(ll idx){
        if(used[idx])return;
        used[idx]=true;
        for(ll to : list[idx]) dfs(to);
        order.push_back(idx);
    }
    void rdfs(ll idx, ll cnt){
        if(cmp[idx] != -1) return;
        cmp[idx] = cnt;
        for(ll to : rlist[idx]) rdfs(to, cnt);
    }
    void build(){
        make_list();
        for(ll i=0; i<list.size(); i++) dfs(i);
        std::reverse(order.begin(), order.end());
        ll ptr=0;
        for(ll i : order)if(cmp[i]==-1) rdfs(i,ptr++);
        node_num = ptr;

        nodes.assign(node_num, std::vector<ll>());
        for(ll i=0; i<G.v; i++)nodes[cmp[i]].push_back(i);

        std::set<std::pair<ll,ll>> connect;
        Gscc = Graph(node_num, true);
        for(auto i : G.edges){
            ll x = cmp[i.from];
            ll y = cmp[i.to];
            if(x==y)continue;
            if(connect.count({x,y}))continue;
            connect.emplace(x,y);
        }
        for(auto i : connect){
            Gscc.connect(i.first, i.second);
        }
    }
    ll operator[](ll k){
        return cmp[k];
    }
};

int main(){
    ll v,e,s,t;
    cin >> v >> e;
    Graph G(v, true);
    REP(i,e){
        cin >> s >> t;
        G.connect(s,t);
    }
    StronglyConnectedComponents scc(G);
    scc.build();
    //for(auto i : scc.cmp)cout << "###" << i << endl;
    //cout << "##" << scc.node_num << endl;
    for(auto i : scc.nodes){
        if(i.size()!=1)cout << "###" << endl;
        cout << i[0] << endl;
    }
    return 0;
}
