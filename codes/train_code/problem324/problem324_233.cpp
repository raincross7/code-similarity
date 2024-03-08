#pragma GCC optimize ("O3")

#include <bits/stdc++.h>
#define DEBUG true
#ifdef ONLINE_JUDGE
#undef DEBUG
#define DEBUG false
#endif 

using namespace std;

#define TRACE(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); cerr << endl;}

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << "[" << *it << " = " << a << "]";
	err(++it, args...);
}

#define MAXN ((int)2e5+5)
#define MOD ((int)1e9 + 7)
#define INF ((int)1e9 + 9)
#define ll long long
#define _ << " " <<
#define CLEAR(a, b) memset(a, b, sizeof(a))
#define LOG(x) if(DEBUG) cerr << x << endl;
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl "\n"
#define pii pair<int,int>
#define mid ((l+r)/2)

vector<ll> v;

signed main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll n;
	cin >> n;

	ll t = 2;
	while(t*t <= n && n > 1)
	{
		ll ct=0;
		while(n%t==0) 
		{
			n/=t;
			ct++;
		}
		if(ct)
			v.pb(ct);
		t++;
	}
	if(n > 1) 
		v.pb(1);

	ll ans = 0;
	for (ll x : v)
	{
		ll k = 1;
		while(k*(k+1) <= 2*x) k++;
		ans += (k-1);
	}

	cout << ans << endl;
}

/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
*/