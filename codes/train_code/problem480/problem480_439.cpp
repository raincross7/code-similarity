#include "bits/stdc++.h"

#define REP(i,num) for(int i=0;i<(num);++i)
#define LOOP(i) while(i--)
#define ALL(c) c.begin(),c.end()
#define PRINTALL(c) for(auto pitr=c.begin();pitr!=c.end();++pitr){cout<<*pitr;if(next(pitr,1)!=c.end())cout<<' ';}cout<<endl;
#define PAIRCOMP(c,comp) [](const pair<ll,ll>& lhs,const pair<ll,ll>& rhs){return lhs.c comp rhs.c;}

using namespace std;
using ll = long long;

constexpr ll atcoder_mod = 1e9+7;

template<typename T=int>
T in(){T x; cin >> x; return (x);}
template<typename T=int,typename C=vector<T>>
C vecin(int N){C x(N);REP(i,N){x[i]=in<T>();}return move(x);}

void vout(){cout << endl;}
template<typename Head,typename... Tail>
void vout(Head&& h,Tail&&... t){cout << ' ' << h;vout(forward<Tail>(t)...);}
void out(){cout << endl;}
template<typename Head,typename... Tail>
void out(Head&& h,Tail&&... t){cout << h;vout(forward<Tail>(t)...);}

class ConnectNodeInfo{
	vector<vector<pair<ll,ll>>> graph;
public:
	ConnectNodeInfo(int node_num){
		graph.resize(node_num);
	}
	void AddNonDirectionalConnection(ll u,ll v,ll w){
		graph[u].emplace_back(v,w);
		graph[v].emplace_back(u,w);
	}
	void AddDirectionalConnection(ll u,ll v,ll w){
		graph[u].emplace_back(v,w);
	}
	vector<pair<ll,ll>>& operator[](ll index){
		return graph[index];
	}
	size_t size(){return graph.size();}
};

class Dijkstra{
	using Point = pair<ll,ll>;
	vector<ll> dist;
public:
	void CalcShortestPath(int start,ConnectNodeInfo& connect){
		dist.resize(connect.size(),1LL<<60);
		dist[start] = 0;

		priority_queue<Point,vector<Point>,greater<Point>> Q;
		Q.emplace(0,start);
		while(!Q.empty()){
			auto p = Q.top();
			Q.pop();
			int v = p.second;
			if(dist[v]<p.first){
				continue;
			}
			for(auto e:connect[v]){
				if(dist[e.first]>dist[v]+e.second){
					dist[e.first] = dist[v]+e.second;
					Q.emplace(dist[e.first],e.first);
				}
			}
		}
	}
	ll GetDistance(int i){
		return dist[i];
	}
};

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout<<fixed<<setprecision(10);

	int N=in();
	ConnectNodeInfo connect(N);

	REP(i,N-1){
		int a=in()-1,b=in()-1,c=in();
		connect.AddNonDirectionalConnection(a,b,c);
	}
	int Q=in(),K=in()-1;
	Dijkstra Dij;
	Dij.CalcShortestPath(K,connect);
	LOOP(Q){
		int x=in()-1,y=in()-1;
		out(Dij.GetDistance(x)+Dij.GetDistance(y));
	}
	return 0;
}
