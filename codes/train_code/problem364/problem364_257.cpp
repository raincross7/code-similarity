#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<pair<ll, ll>> vpll;
typedef pair<ll, ll> pll;
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define yes(a) printf(a ? "yes\n" : "no\n")
#define Yes(a) printf(a ? "Yes\n" : "No\n")
#define YES(a) printf(a ? "YES\n" : "NO\n") 
const long double PI = acos(-1);
const long long INF = (1 << 30);
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll stringcount(string s, char c){return count(s.cbegin(), s.cend(), c);}
bool isInteger(double x){return floor(x) == x;}
ll ceil(const ll a, const ll b){return ((a)+(b)-1)/b;}

ll h, w;
string s[51];
ll dist[51][51];

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
	
  ll n, a, b;
  cin >> n >> a >> b;
  while(1){
    if(a+1 == b){
      cout << "Borys" << endl;
      break;
    }
    a++;
    if(b-1 == a){
      cout << "Alice" << endl;
      break;
    }
    b--;
  }
	return 0;
}