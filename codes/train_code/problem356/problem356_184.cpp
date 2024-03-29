#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)
#define all(c) c.begin(),c.end()
#define pb push_back
#define fs first
#define sc second
#define chmin(x,y) x=min(x,y)
#define chmax(x,y) x=max(x,y)
using namespace std;
template<class S,class T> ostream& operator<<(ostream& o,const pair<S,T> &p){
	return o<<"("<<p.fs<<","<<p.sc<<")";
}
template<class T> ostream& operator<<(ostream& o,const vector<T> &vc){
	o<<"{";
	for(const T& v:vc) o<<v<<",";
	o<<"}";
	return o;
}
using ll = long long;
template<class T> using V = vector<T>;
template<class T> using VV = vector<vector<T>>;
constexpr ll TEN(int n) { return (n == 0) ? 1 : 10 * TEN(n-1); }

#ifdef LOCAL
#define show(x) cerr << "LINE" << __LINE__ << " : " << #x << " = " << (x) << endl
#define dump(x) cerr << "LINE" << __LINE__ << " : " << #x << " = {";  \
	for(auto v: x) cerr << v << ","; cerr << "}" << endl;
#else
#define show(x) true
#define dump(x) true
#endif

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);		//DON'T USE scanf/printf/puts !!
	cout << fixed << setprecision(20);
	
	int N; cin >> N;
	map<int,int> mp;
	rep(i,N){
		int x;
		cin >> x;
		mp[x]++;
	}
	V<ll> n(N+1),s(N+1);
	for(auto it: mp){
		int num = it.sc;
		n[num]++;
		s[num] += num;
	}
	rep(i,N){
		n[i+1] += n[i];
		s[i+1] += s[i];
	}
	V<int> ans(N+1);
	rep1(t,N){
		int sum = s[t] + (n[N]-n[t]) * t;
		int k = sum/t;
		chmax(ans[k],t);
	}
	for(int i=N;i>0;i--) chmax(ans[i-1],ans[i]);
	rep1(i,N) cout << ans[i] << endl;
}
