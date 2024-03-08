#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,int> pdi;
typedef pair<double,double> pdd;
typedef pair<double,ll> pdl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<vl> vvl;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<pdd> vdd;
typedef vector<pdi> vdi;
typedef vector<pdl> vdl;
#define fi first
#define se second
const ll INFLL=LLONG_MAX;
const int INF=INT_MAX;
const ll MAXLL=0x3f3f3f3f3f3f3f3f;
const int MAX=0x3f3f3f3f;
#define eb emplace_back
#define emp emplace
#define mp(a,b) make_pair(a,b)
template<class T> using min_heap=priority_queue<T,vector<T>,greater<T> >;
template<class T>
void sort(vector<T>& v){
	sort(v.begin(),v.end());
}
template <class T, class U>
void sort(vector<T>& v,U func){
	sort(v.begin(),v.end(),func);
}
template<class T>
void rsort(vector<T>& v){
	sort(v.rbegin(),v.rend());
}
template <class T>
int lb_index(vector<T>& v,T k){
	return lower_bound(v.begin(),v.end(),k)-v.begin();
}
template <class T>
int ub_index(vector<T>& v,T k){
	return upper_bound(v.begin(),v.end(),k)-v.begin();
}
template<class T>
bool is_sorted(vector<T>& v){
	return is_sorted(v.begin(),v.end());
}
template<class T>
bool sorted(vector<T>& v){
	return is_sorted(v);
}
void precompute(){
 
	return;
}
void solve(){
	ll n,m;
	cin>>n>>m;
	vi v(n+5);
	for(int i=0;i<m;i++){
		int l,r;
		cin>>l>>r;
		v[l]++;
		v[r+1]--;
	}
	ll ans=0;
	for(int i=1;i<=n;i++){
		v[i]+=v[i-1];
		if(v[i]==m)ans++;
	}
	cout<<ans;
}
 
int main(){
	ios::sync_with_stdio(0);
	int numberofsubtestcases=1;
//	cin>>numberofsubtestcases;
	precompute();
	for(int looping=1;looping<=numberofsubtestcases;looping++){
//		cout<<"Case #"<<looping<<": ";
		solve();
	}
	return 0;
}