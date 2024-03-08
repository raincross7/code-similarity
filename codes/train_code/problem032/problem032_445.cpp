#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<complex>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<utility>
#include<tuple>
using namespace std;
typedef long long ll;
typedef unsigned int ui;
const ll mod = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
typedef pair<int, int> P;
#define stop char nyaa;cin>>nyaa;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define Per(i,sta,n) for(int i=n-1;i>=sta;i--)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
typedef long double ld;
const ld eps = 1e-8;
const ld pi = acos(-1.0);
typedef pair<ll, ll> LP;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int n,k;
int a[100010];
ll b[100010];

void solve(){
    cin >> n >> k;
    rep(i,n){
        cin >> a[i] >> b[i];
    }
    ll ans=0;
    rep(i,32){
        ll res=0;
        vector<int> v;
        if(i>0){
            if(!(k & (1 << (i-1)))) continue;
            v.push_back(i-1);
        } 
        Rep(j,i,32){
            if(!(k & (1 << j))){
                v.push_back(j);
            }
        }
        rep(s,n){
            bool flag=true;
            for(int t:v){
                if(a[s]&(1 << t)){
                    flag=false;
                }
            }
            if(flag)res+=b[s];
        }
        ans=max(ans,res);
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(50);
    solve();
}