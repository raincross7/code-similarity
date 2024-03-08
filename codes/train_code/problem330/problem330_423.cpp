#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0;i<int(N);++i)
#define rep1(i,N) for(int i=1;i<int(N);++i)
#define all(a) (a).begin(),(a).end()
#define print(v) { cerr<<#v<<": [ "; for(auto _ : v) cerr<<_<<", "; cerr<<"]"<<endl; }
#define printpair(v) { cerr<<#v<<": [ "; for(auto _ : v) cerr<<"{"<<_.first<<","<<_.second<<"}"<<", "; cerr<<"]"<<endl; }
#define bit(k) (1LL<<(k))
typedef long long ll;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

const int INF = 1e9;
const ll INFLL = 1e18;
const ll MOD = 1e9+7;
const double PI = acos(-1.0);

const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

/*------------------------------------/
for library*/
template<class T> class Graph {
public:
    struct edge{int to; T cost; int id;};
    int N;
    vector<vector<edge>> G;
    vector<vector<T>> d;//distance matrix
    Graph(int _N): N(_N){
        G = vector<vector<edge>>(N, vector<edge>(0));
        d = vector<vector<long long>>(N, vector<long long>(N));
    }
    void add_Directed_edge(int from, int to, T cost = 1, int id = 0){
        G[from].push_back(edge({to, cost, id}));
    }

    void add_Undirected_edge(int v1, int v2, T cost = 1, int id = 0){
        add_Directed_edge(v1, v2, cost, id);
        add_Directed_edge(v2, v1, cost, id);
    }
    void WarshallFloyd(){
        //initialize the distance matrix
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; j++){
                d[i][j] = ((i == j) ? 0: INFLL);
            }
        }
        for(int i = 0; i < N; ++i){
            for(auto e: G[i]){
                d[i][e.to] = e.cost;
            }
        }
        //WarshallFloyd
        for(int k = 0; k < N; ++k){
            for(int i = 0; i < N; ++i){
                for(int j = 0; j < N; ++j){
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
    }
    void debug(){
        for(int i = 0; i < N; ++i){
            cerr<<i+1<<": ";
            for(edge e:G[i]){
                cerr<<"{"<<e.to+1<<", "<<e.cost<<"}, ";
            }
            cerr<<endl;
        }
        cerr<<endl<<"distance_matrix"<<endl;
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                if(d[i][j] == INFLL){
                    cerr<<-1<<" ";
                }else cerr<<d[i][j]<<" ";
            }
            cerr<<endl;
        }
    }
};
/*------------------------------------*/
int a[100000],b[100000],c[100000];
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);

    int N,M;
    cin>>N>>M;
    Graph<ll> G(N);
    rep(i,M){
        cin>>a[i]>>b[i]>>c[i];
        a[i]--;b[i]--;
        G.add_Undirected_edge(a[i],b[i],c[i],i);
    }
    G.WarshallFloyd();
    int ans = M;
    //ある辺に関して
    //出てくるところから次のところへ
    rep(i,M){
        bool shortest = false;
        rep(j,N){
            if(G.d[j][a[i]] + c[i] == G.d[j][b[i]]){
                shortest = true;
            }
        }
        if(shortest)ans--;
    }
    cout<<ans<<endl;
}