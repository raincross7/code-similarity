# include<bits/stdc++.h>

using namespace std;

# define int long long
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<double, int> pdi;
typedef pair<ll, ll> pll;

# define S second
# define F first
# define kill(x) return(cout << x << endl, 0)
# define debug(x) cerr<< #x << " : " << x << endl
# define ddebug(x, y) cerr<< #x << " : " << x  << ", " << #y << " : " << y << endl
# define sz(s) (int)s.size()
# define sq(x) (x) * (x)
# define PB(x) push_back(x)
# define smax(x, y) (x) = max((x), (y))
# define smin(x, y) (x) = min((x), (y))
# define all(x) x.begin(), x.end()
# define SP fixed << setprecision(10)

const int MAXN = 100 * 1000 + 10;
int x[MAXN], w[MAXN], 
    ans[MAXN];

int32_t main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n, l, t;
	cin >> n >> l >> t;
	for (int i = 0; i < n; i ++)
	{
		cin >> x[i] >> w[i];
		w[i] --;
	}

	for (int i = 0; i < n; i ++)
		ans[i] = ((x[i] + (w[i] ? -1 : 1) * t) % l + l) % l;
	sort(ans, ans + n);

	int ind = 0;
	for (int i = 0; i < n; i ++)
	{
		if (!w[i])
		{
			ind += t / l;
			if (x[i] + t % l >= l)
				ind ++;
		}
		else
		{
			ind -= t / l;
			if (x[i] - t % l < 0)
				ind --;
		}
		ind = (ind % n + n) % n;
		
	}

	for (int i = 0; i < n; i ++)
		cout << ans[(ind + i) % n] << "\n";

	return 0;
}
