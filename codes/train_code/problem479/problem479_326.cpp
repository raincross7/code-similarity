#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pi 3.141592653589793238
#define eb emplace_back
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define zip(i,a,b) for(int i=a;i<b;i++)
#define rzip(i,a,b) for(int i=a;i>=b;i--)
#define ll unsigned int
#define test int t;cin>>t; while(t--)
#define um unordered_map
#define en '\n'
#define us unordered_set
typedef pair<int, int>     pii;
typedef pair<char, int>    pci;
typedef pair<char, char>   pcc;
typedef vector<pii>       vii;
typedef long double ld;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) (int)x.size()
#define INF (1e18+5)
#define inf (1e9+5)
#define mod 1000000007


void __print(int x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
// You should only debug a pair of simple data types. For example,
// the debug won't work if one of pair's elements is collection type
// (std::vector, std::map, std::set...).
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


// bool check_prime(int n)  return whether a number is prime or not O(sqrt(N));
// int BE(int x,int n,int m)  return x^n%m; O(logN);
// void sieve()  from number 1-1000001 saare prime store kar lega  in bool is_prime[1000001] array
// vector<int> z_array(string s)  return vector which is Z-array of string s;
// vector<int> lps(string s)      return vector which is lps array of string s;
// int power(int x,int n) return x^n; O(logN);
// using_ordered_set (template for using ordered set , replace first 2 lines of this page with this code..);
const int gf = 1e6 + 9;
char c[1009][1009];
int dp[1008][1008];

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	if (fopen("input.txt", "r"))
	{
		freopen ("input.txt" , "r" , stdin);
		freopen ("output.txt" , "w" , stdout);
	}
#endif
	//_______________________________-code starts-_______________________________________________

	int h, w;
	cin >> h >> w;
	rep(i, 0, 1008)rep(j, 0, 1008)c[i][j] = '?';

	rep(i, 1, h)
	{
		rep(j, 1, w)
		{
			char x;
			cin >> x;
			c[i][j] = x;
		}
	}

	dp[1][1] = 1;
	rep(i, 1, h)
	{
		rep(j, 1, w)
		{
			if (c[i][j] == '#')
				dp[i][j] = 0;
			else
				dp[i][j] += ((c[i - 1][j] == '.' ? dp[i - 1][j] : 0) + (c[i][j - 1] == '.' ? dp[i][j - 1] : 0));
			dp[i][j] %= mod;
		}
	}
	cout << dp[h][w] << en;


	return 0;
}


