#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define ffor(i,a,b) for(int i=a;i<b;i++)
#define bfor(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define mem(x,y) memset(x,y,sizeof(x))
#define all(x) x.begin(),x.end()
#define SP(x) setprecision(x)
#define sz(x) (int)x.size()
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define PI 3.14159265358979323846
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define endl '\n'

ll a[26],ans;



int main()
{
   // #ifndef ONLINE_JUDGE
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   // #endif
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(auto i:s) a[i-'a']++;
    ll ans=1;
    ffor(i,0,26) ans=ans*(a[i]+1)%mod;
    cout<<(ans-1+mod)%mod;
    return 0;
}

