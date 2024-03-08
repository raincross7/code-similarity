#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#define pb push_back
#define mpr make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ll long long
#define ld long double
#define all(arr) arr.begin(), arr.end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define fo(i, l, r) for (int i = l; i <= r; i++)
#define INF 1000000001
#define inf1 1000000000000000001
#define mod 1000000007
#define pie 3.14159265358979323846264338327950L
#define N 100005
#define mid(l, r) l + (r - l) / 2
#define vec vector<int>
#define vecl vector<ll>
#define umap unordered_map<ll,ll>
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define endl "\n"
using namespace std;
 
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};  
int ddx[8]={1,1,0,-1,-1,-1,0,1},ddy[8]={0,1,1,1,0,-1,-1,-1};
ll gcd(ll a,ll b){ if(!a)return b;return gcd(b%a,a);}
ll lcm(ll a, ll b) { return (a*b)/ gcd(a,b);}



ll fun(ll n) {
    ll val = n * (n-1);
        return val / 2;
}


void test_case() {

    ll n;
    cin>>n;

    vecl arr(n+1,LONG_MAX);
    fo(i,1,n) {
        cin>>arr[i];
    }

    unordered_map<ll,ll> mp;
    for(int i=1; i<=n; i++) {
        mp[arr[i]]++;
    }

    ll ans = 0;

    for(auto it : mp) {
        if(it.second > 1) {
            ans += fun(it.second);
        }
    }

    // cout<<ans<<endl;


    for(int i=1; i<=n; i++) {

        ll val = mp[arr[i]];
        ll temp = ans;

        if ( val > 1) {
            temp = temp - fun(val) + fun(val - 1);
        }

        cout<<temp<<endl;



    }




  

    


}
 
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed<<setprecision(20);
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
 
 
    int t = 1;
    // cin >> t;
    while (t--)
    {
        test_case();
    }
}