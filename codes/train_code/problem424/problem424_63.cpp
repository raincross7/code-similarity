#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define mrep(i,j,n) for(int i = j; i < n; i++)
#define reps(i,n) for(int i = 1; i <= n; i++)
#define rrep(i,n) for(int i = n-1; i >= 0; i--)
#define mreps(i,j,n) for(int i = j; i <= n; i++)
#define rreps(i,n) for(int i = n; i >= 1; i--)
#define co(x) cout << x <<endl
#define cs(x) cout << x <<" "
#define el cout << endl
#define sp(x) cout << setprecision(x);
#define cer(x) cerr << x <<endl
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define ERASE(x,val) x.erase(remove(ALL(x), val), x.end())
#define vi vector<int> 
#define vvi vector<vector<int>> 
#define vpii vector<pair<int,int>> 
#define vl vector<ll> 
#define vvl vector<vector<ll>> 
#define vd vector<double> 
#define vvd vector<vector<double>> 
#define vb vector<bool> 
#define vvb vector<vector<bool>>
#define vs vector<string>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
ll mod = 1e9 + 7;
template<class T>inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; }return false; }
template<class T>inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; }return false; }
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { ll g = gcd(a, b); return a * b / g; }
bool is_prime(ll x) { for (ll i = 2; i * i <= x; i++) { if (x % i == 0)return false; } return true; }


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, h, w; cin >> n >> h >> w;
	int ans = 0;
	rep(i, n)
	{
		int a, b;
		cin >> a >> b;
		if (h <= a && w <= b)ans++;
	}
	co(ans);
	return 0;
}
