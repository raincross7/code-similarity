//#pragma GCC optimize "trapv"
#include<bits/stdc++.h>
#define  all(v)            v.begin(), v.end()
#define  sz(x)             (int)x.size()
#define  debug(x)          cout << #x << ':' << x << endl;
#define  rep(i,n)          for(int i = 0; i <  n ; i++)
#define  reps(i,n)         for(int i = 1; i <= n ; i++)
#define  make_unique(v)    sort(all(v));v.erase(unique(all(v)), v.end());
#define  REMOVE(v,a)       v.erase(remove(v.begin(),v.end(), a), v.end());
#define  pb                push_back
#define  mp                make_pair
#define  endl              '\n'
#define  fi                first
#define  se                second
#define  ajs(a)            (a<0)?(-1*a):a

using namespace std;
typedef long long          ll;
typedef vector<long long>  vll;
typedef pair<ll,ll>        pll;
typedef vector<int>        vi;
const ll MOD = 1e9+7;
const int dx4[4] = {0, 1, 0, -1};
const int dy4[4] = {-1, 0, 1, 0};
const int dx8[8] = { -1, -1, -1, 0, 1, 1, 1, 0};
const int dy8[8] = { -1, 0, 1, 1, 1, 0, -1, -1};
bool cmp(int X, int Y) {return X > Y;}

ll gcd(ll a, ll b) {return !b ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
ll modpow(ll a, ll b, ll m=MOD){a %= m; ll res = 1; while (b) {if (b & 1)res = (res * a) % m; a = (a * a) % m; b >>= 1;} return res;}
ll bpow(ll a, ll b){if(b<0){return 0;}ll res = 1; while (b) {if (b & 1)res = res * a; a = a * a; b >>= 1;} return res;}

const int N = 1e6+5;
vi adj[N];
ll present[N];


int main(){ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll n;cin>>n;
ll a[n];
rep(i,n){cin>>a[i];}

sort(a,a+n);
map<ll,ll>cnt;
rep(i,n){cnt[a[i]]++;}
for(ll i = 0; i<n-1 ; i++){
	for(ll j = a[i]*2; j<=a[n-1]; j=j+a[i]){
		present[j]=1;
		
		}
	
	
	}
ll ans = 0;
for(ll i = 0; i<n; i++){
	if(cnt[a[i]] == 1){
		if(present[a[i]] == 0){
			ans++;
			}
		}
	
	
}
cout<<ans;	
	


}
