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
	int n,m;
	cin>>n>>m;
	vector<int> cnt={2,5,5,4,5,6,3,7,6};
	vector<int> a(m),dp(n+100,-INF);
	dp[0]=0;
	rep(i,m){
		cin>>a[i];
		a[i]--;
	}
	sort(begin(a),end(a),greater<int>());
	rep(i,n){
		for(auto now:a){
			chmax(dp[i+cnt[now]],dp[i]+1);
		}
	}
	int now=dp[n];
	int ind=n;
	string ans;
	while(now){
		for(auto num:a){
			if(ind-cnt[num]>=0 && dp[ind-cnt[num]]==now-1){
				int c=num+1;
				ans+=(char)c+'0';
				ind-=cnt[num];
				now--;
				break;
			}
		}
		//cout<<now<<' '<<ans<<' '<<ind<<endl;
	}
	cout<<ans<<endl;
}