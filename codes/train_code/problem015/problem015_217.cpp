#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> P;
typedef pair<int,int> Pi;
#define rep(i,n) for(ll i=0;i<n;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define fi first
#define se second
#define endl "\n"

template<typename T> inline bool chmax(T &a, T b){if(a<b){a=b;return true;}return false;}
template<typename T> inline bool chmin(T &a, T b){if(a>b){a=b;return true;}return false;}
template<typename T> ostream& operator<<(ostream& s,const complex<T>& d) {return s<<"("<<d.real()<<", "<<d.imag()<< ")";}
template<typename T1, typename T2> ostream& operator<<(ostream& s,const pair<T1,T2>& d) {return s<<"("<<d.first<<", "<<d.second<<")";}
template<typename T> ostream& operator<<(ostream& s, const vector<T>& d){int len=d.size();rep(i,len){s<<d[i];if(i<len-1) s<<" ";}return s;}
template<typename T> ostream& operator<<(ostream& s,const vector<vector<T>>& d){int len=d.size();rep(i,len){s<<d[i]<<endl;}return s;}
template<typename T> ostream& operator<<(ostream& s,const set<T>& v){s<<"{ ";for(auto itr=v.begin();itr!=v.end();++itr) {if (itr!=v.begin()) {s<< ", ";}s<<(*itr);}s<<" }";return s;}
template<typename T1, typename T2> ostream& operator<<(ostream& s,const map<T1,T2>& m){s<<"{"<<endl;for(auto itr=m.begin();itr!=m.end();++itr){s<<" "<<(*itr).first<<" : "<<(*itr).second<<endl;}s<<"}"<<endl;return s;}

const ll mod=1e9+7;
const ll inf=1e17;
const int INF=1e9;
const double PI=acos(-1);
const double EPS=1e-10;

int main(){
	cin.tie(0);ios::sync_with_stdio(false);
	ll n,k;
	cin>>n>>k;
	deque<ll> a(n);
	rep(i,n){
		cin>>a[i];
	}
	ll ans=0;
	rep(l,k+1)rep(r,k+1){
		if(l+r>k) continue;
		priority_queue<ll,vector<ll>,greater<ll>> pq;
		deque<ll> que(a);
		ll now=0;
		rep(i,l){
			if(que.empty()) break;
			pq.push(que.front());
			now+=que.front();
			que.pop_front();
		}
		for(int i=n-1;i>n-1-r;i--){
			if(que.empty()) break;
			pq.push(que.back());
			now+=que.back();
			que.pop_back();
		}
		if(pq.empty()) continue;
		ll cnt=min(k-(l+r),ll(pq.size()));
		while(cnt--){
			if(pq.empty()) break;
			ll tmp=pq.top();
			pq.pop();
			if(tmp<0) now-=tmp; 
			else break;
		}
		chmax(ans,now);
	}
	cout<<ans<<endl;
}