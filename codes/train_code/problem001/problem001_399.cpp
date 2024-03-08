#include <bits/stdc++.h>  // This will work only for g++ compiler.

#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define sz(a) int((a).size())
#define mod 1000000007
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;

void fast()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
bool isprime(ll x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0) return false;
    }
return true;
}
void solve()
{
  ll r,d,x0;
  cin >> r >> d >> x0 ;
  ll x[11];
  x[0]=x0 ;
  for(int i=1;i<=10;i++)
  {
      x[i] = x[i-1]*r - d;
  }
  for(int i=1;i<=10;i++) cout << x[i] << endl;
}
int main()
{
  fast();
  solve();

return 0;
}
