/*
 _____ ____ _____   ___   ___   ___   ___ 
|_   _/ __ \_   _| |__ \ / _ \ |__ \ / _ \
  | || |  | || |      ) | | | |   ) | | | |
  | || |  | || |     / /| | | |  / /| | | |
 _| || |__| || |_   / /_| |_| | / /_| |_| |
|_____\____/_____| |____|\___/ |____|\___/ 
*/
#include <bits/stdc++.h>
#include <fstream>
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define per(i, a, b) for (int i = (a); i > (b); i--)
#define a(x) (x.begin(), x.end())
#define ar(x) (x.rbegin(), x.rend())
#define pb push_back
#define Pb() pop_back()
#define ll long long int
#define ull unsigned long long int
#define pii pair<int, int>
#define pll pair<ll, ll>
#define sc scanf
#define scin(x) sc("%d", &(x))
#define scln(x) sc("%lld", &(x))
#define pf prllf
#define ms(a, b) memset(a, b, sizeof(a))
#define mp make_pair
#define db double
#define EPS 10E-10
#define ff first
#define ss second
#define sqr(x) (x) * (x)
#define vi vector<int>
#define vl vector<ll>
#define vii vector<vector<int>>
#define vll vector<vector<ll>>
#define DBG pf("HI\n")
#define MOD 1000000007
#define CIN                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
#define RUN_CASE(t, T) for (__typeof(t) t = 1; t <= T; t++)
#define CASE(t) prllf("Case %d: ", t)
#define CASEL(t) prllf("Case %d:\n", t)
#define intlimit 2147483647
#define longlimit 9223372036854775807
#define infinity (1 << 28)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * (b) / gcd(a, b))
#define PI 2 * acos(0.0)
// pair<int,int>ert(x==y); gives run time when false
using namespace std;
int main()
{
  CIN;
  int n, x, y;
  cin >> n >> x >> y;
  if (x + y > n + 1)
  {
    cout << -1;
    return 0;
  }
  vi up;
  rep(i, n - x + 1, n + 1)
  {
    up.pb(i);
  }
  vi down;
  per(i, y - 1, 0)
  {
    down.pb(i);
  }
  int last = n - x, nh = 2 * y - 2, bd = y - 1;
  while (1)
  {
    per(i, min(nh, last), bd)
    {
      down.pb(i);
    }
    if (nh >= last)
      break;
    bd = nh;
    nh = bd + y - 1;
  }
  int ch = 1,coco = 0;
  rep(i,0,down.size()){
    if(down[i]==ch){
      ch += y-1;
      coco++;
    }
  }
  if(coco>x){
    cout << -1;
    return 0;
  }
  rep(i, 0, up.size())
  {
    cout << up[i] << " ";
  }
  rep(i, 0, down.size())
  {
    cout << down[i] << " ";
  }
}