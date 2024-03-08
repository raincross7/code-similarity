//FIRST THINK THEN CODE.

#include <bits/stdc++.h>


using namespace std;

typedef long long ll;

#define rep(i,a,b) for(ll i=a;i<b;++i)
#define rrep(i,a,b) for(ll i=a;i>b;--i)
#define FOR(i,n)  for(ll i=0;i<n;i++)
#define vi vector<int>
#define vl vector<ll>
#define ld long double
#define vld vector<ld>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vvld vector<vector<ld>>
#define pii pair<int,int>
#define pll pair<long,long>
#define vpii vector<pii>
#define vpll vector<pll>
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define d1(x) cout<<(x)<<endl
#define d2(x,y) cout<<(x)<<" "<<(y)<<endl
#define d3(x,y,z) cout<<(x)<<" "<<(y)<<" "<<(z)<<endl
#define d4(a,b,c,d) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl
#define PI 3.1415926535897932384626433832795
#define fix(f,n) fixed<<setprecision(n)<<f
#define all(x) x.begin(),x.end()
#define rev(p) reverse(p.begin(),p.end());
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define popcount(x) __builtin_popcountll(x)
#define sz(x) ((ll)x.size())
const ll M = 1000000007;
const ll MM = 998244353;
ll begtime = clock();
#define end_routine() cout << "\n\nTime elapsed: " << (clock() - begtime)*1000/CLOCKS_PER_SEC << " ms\n\n";
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//#define trace(...)
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
  cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
  const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}

template<typename T, typename F>
void chmax( T &a, F b) {
  if (b > a)a = b;
}

template<typename T, typename F>
void chmin( T &a, F b) {
  if (b < a)a = b;
}



ll powM(ll a, ll b, ll m)
{
  if (a <= 0)return 0;
  a %= m;
  ll ans = 1LL;
  while (b)
  {
    if (b & 1)ans = ans * a % m;
    a = a * a % m;
    b >>= 1;
  }

  return ans;
}



ll poww(ll a, ll b)
{

  ll ans = 1;
  while (b)
  {
    if (b & 1)ans = ans * a;
    a = a * a;
    b >>= 1;
  }

  return ans;

}


string tostring(ll x) {
  stringstream sss;
  sss << x;
  string ans = sss.str();
  return ans;
}



const ll N = 1e6 + 5;





int main() {

  IOS;

#ifndef ONLINE_JUDGE

  freopen("input1.txt", "r", stdin);
  freopen("output1.txt", "w", stdout);

#endif

  ll n; cin >> n;

  ll z; cin >> z;

  vl a(n + 1);

  vl pr(n + 1);

  for (ll i = 1; i <= n; i++) {
    cin >> a[i];
    pr[i] = pr[i - 1] + a[i];
  }

  vl form;

  for (ll i = 1; i <= n; i++) {
    for (ll j = 0; j < i; j++) {
      form.pb(pr[i] - pr[j]);
    }
  }

  ll ans = 0;

  //for (auto d : form)d1(d);

  for (ll bit = 40; bit >= 0; bit--) {
    vl temp;
    ll k = 1ll << bit;
    for (auto p : form) {
      if (p & k) {
        temp.pb(p);
      }
    }
    if (sz(temp) < z) {
    }//continue;
    else {
      form = temp;
      ans += k;
    }
    // d2(bit, sz(temp));

  }

  cout << ans;

  return 0;
}