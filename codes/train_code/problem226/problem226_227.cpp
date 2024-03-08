#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
using ld = long double;
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define all(v) (v).begin(), (v).end()
#define siz(v) (ll)(v).size()
#define rep(i, a, n) for (ll i = a; i < (ll)(n); i++)
#define repr(i, a, n) for (ll i = n - 1; (ll)a <= i; i--)
#define lb lower_bound
#define ub upper_bound
typedef pair<int, int> P;
typedef pair<ll, ll> PL;
const ll mod = 1000000007;
const ll INF = 1000000099;
const ll LINF = (ll)(1e18 + 99);
vector<ll> dx = {-1, 1, 0, 0}, dy = {0, 0, -1, 1};
template <typename T>
T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template <typename T>
T mpow(T a, T n)
{
   T res = 1;
   for (; n; n >>= 1)
   {
      if (n & 1)
         res = res * a;
      a = a * a;
   }
   return res;
}



int check(int x)
{
   cout << x << endl;
   fflush(stdout);

   string ans;
   cin >> ans;
   if (ans == "Vacant")
   {
      exit(0);
   }
   else if (ans == "Male")
   {
      return 0;
   }
   else
   {
      return 1;
   }
}

signed main()
{
   cin.tie(0);ios::sync_with_stdio(false);
   int n;
   cin >> n;
   int i = 0, j = n-1;
   int l = check(i),r=check(j);

   while (1)
   {
      int mid = (i + j) / 2;
      int res = check(mid);
      if ((res == l)==((mid - i) % 2))
      {
         j = mid;
         r=res;
      }
      else
      {
         i = mid;
         l=res;
      }
   }
}
