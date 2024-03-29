#include <bits/stdc++.h>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef vector<pll> vpll;
typedef pair<P,int> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const ll INF=1ll<<60;
const double pi=acos(-1);
const double eps=1e-8;
const ll mod=998244353;
const int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};

const int M=1000001;
int n;
vi a;
bool b[M];

int main(){
	cin>>n;
	a=vi(n);
	map<int,int> mp;
	for(auto &i:a){
		cin>>i;
		mp[i]++;
	}
	sort(a.begin(),a.end());
	int t=0;
	for(auto i:a){
		if(mp[i]==1&&!b[i]) t++;
		if(!b[i]){
			int x=i;
			while(x<M){
				b[x]=1;
				x+=i;
			}
		}
	}
	cout<<t<<endl;
}