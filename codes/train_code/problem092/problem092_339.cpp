#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define eb emplace_back
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}
int const INF = 1001001001;
ll const MOD = 1000000007;


int main()
{
cin.tie(0);
ios::sync_with_stdio(false);

int N = 3;
vi A(N);
map<int,int> cnt;
rep(i,N) {
    cin >> A[i];
    cnt[A[i]]++;
}
for(auto x:cnt) {
    if(x.second == 1) cout << x.first << endl;
}

return 0;
}