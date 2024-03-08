#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<sstream>
#include<iomanip>
#include<assert.h>
#include<typeinfo>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef pair<Def,pii> pip;
typedef vector<pip>vip;
//#define mt make_tuple
//typedef tuple<pii,int,int> tp;
//typedef vector<tp> vt;
template<typename A,typename B>bool cmin(A &a,const B &b){return a>b?(a=b,true):false;}
template<typename A,typename B>bool cmax(A &a,const B &b){return a<b?(a=b,true):false;}
//template<class C>constexpr int size(const C &c){return (int)c.size();}
//template<class T,size_t N> constexpr int size(const T (&xs)[N])noexcept{return (int)N;}
const double PI=acos(-1);
const double EPS=1e-7;
Def inf=sizeof(Def)==sizeof(long long)?9e18:1e9;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int n;
vvi G;
vi used;
int dfs(int a){
	used[a]=true;
	int out=0;
	rep(i,G[a].size())if(!used[G[a][i]])out^=dfs(G[a][i]);
	return out+1;
}
int main(){
	int n;
	cin>>n;
	G=vvi(n);
	rep(i,n-1){
		int a,b;
		cin>>a>>b;
		a--;b--;
		G[a].pb(b);
		G[b].pb(a);
	}
	used=vi(n);
	int t=dfs(0);
	if(t==1)cout<<"Bob"<<endl;
	else cout<<"Alice"<<endl;
}







