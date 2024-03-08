#include "bits/stdc++.h"
using namespace std;
#define pb          push_back
#define mp          make_pair
#define ll          long long
#define pii         pair<int, int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int, int>
#define mii         map<pii, int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define rev(i,a,b)  for(int i=a;i>=b;i--)
#define lb          lower_bound
#define ub          upper_bound

#define bg(i)       i.begin()
#define fset(it,s)   for(auto it = s.begin(); it != s.end(); it++)
 
#define track(x)                 cerr<<#x<<": "<<x<<endl
#define track2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define track3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define track4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
 
#define ed(i)       i.end()
#define mem(a)	    memset(a, 0, sizeof(a))

#define MOD         1000000007
int mult(int a,int b, int p=MOD){return ((a%p)*(b%p))%p;}
int add(int a, int b, int p=MOD){return (a + b + p)%p;}
int fpow(int n, int k, int p = MOD) {int r = 1; for (; k; k >>= 1LL) {if (k & 1LL) r = mult(r,n,p); n = mult(n,n,p);} return r;}
int inv(int a, int p = MOD) {return fpow(a, p - 2, p);}
void self_max(int &a, int b) {a = max(a, b); }
void self_min(int &a, int b) {a = min(a, b); }
void self_add(int &a, int b, int p = MOD) { a += b; if(a >= p) a -= p;}
void self_sub(int &a, int b, int p = MOD) { a -= b; if(a < 0) a += p;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
const int INF = 1e9 + 5;
#define N	    	400001

int a[N];
int ans = 0;

int getmin(int l, int r) {
    int ans = a[l];
    int ind = l;
    rep(i, l+1, r+1) {
        if(a[i] < ans) {
            ans = a[i];
            ind = i;
        }
    }
    return ind;
}

void dfs(int l, int r, int curr) {
    if(l > r)
        return;
    int ind = getmin(l, r);
    ans += a[ind] - curr;
    curr = a[ind];
    dfs(l, ind-1, curr);
    dfs(ind+1, r, curr);
}
void solve(){
    int n;
    cin>>n;
    rep(i, 0, n) cin>>a[i];
    dfs(0, n-1, 0);
    cout<<ans<<endl;
}
int main() {
	ios::sync_with_stdio(false);
	cout<<fixed<<setprecision(20);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
//	cin>>t;
	while(t--){
		solve();
	}
}