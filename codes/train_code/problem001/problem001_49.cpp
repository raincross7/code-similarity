#include<bits/stdc++.h>
using namespace std;
#define flash ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define S second
#define pb push_back
#define all(v) (v).begin(),(v).end() 
#define endl "\n"
#define int long long int
#define ll long long
#define ld long double
#define vi vector<int>
#define vvi vector<vector<int>>
#define Yes() cout << "Yes" << endl
#define YES() cout << "YES" << endl
#define No() cout << "No" << endl
#define NO() cout << "NO" << endl
const int mod = 1000000007;
const int N=200005;
const int inf=1e18;
vector<vector<int>>adj(N);


bool isPrime(ll n){if(n<2)return false;for(ll i=2;i*i<=n;++i){if(n%i==0){return false;}}return true;}
ll power(ll x,ll y){ll res=1;x=x;while(y>0){if(y&1)res=(res*x)%mod;y=y>>1;x=(x*x)%mod;}return res%mod;}
ll gcd(ll a,ll b){if (a==0)return b;return gcd(b%a,a);}

void fun(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


signed main(){
    flash;
    fun();
    int t=1;
    //cin>>t;
    while(t--){
        vi a(11,0);
        int r,d;
        cin>>r>>d>>a[0];
        for(int i=1;i<=10;i++){
            a[i]=r*a[i-1]-d;
        }
        for(int i=1;i<11;i++){
            cout<<a[i]<<endl;
        }
    }
    return 0;
}