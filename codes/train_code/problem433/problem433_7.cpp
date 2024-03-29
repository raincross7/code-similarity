#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define fo(i,n)         for(i=0;i<n;i++)
#define Fo(i,k,n)       for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x)          cout << #x << "=" << x << endl
#define deb2(x, y)      cout << #x << "=" << x << "," << #y << "=" << y << endl
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
 
const int N = 1e6 , M = N;
//=======================
vi factorize (vi v){
	for(int i=1;i<=N;i++)
		for(int j=i;j<=N;j+=i){
			v[j]+=1;
		}
	return v;
}
 
void solve() {
	vi v(N+1,0);
	v=factorize(v);
	int n;
	cin>>n;
	int ans = 0;
	for(int c=n-1;c>=1;c--){
		ans += v[n-c];
		// deb2(n-c,v[n-c]);
	}
	cout<<ans;
}
 
int32_t main()
{
  FIO;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  solve();
  return 0;
}