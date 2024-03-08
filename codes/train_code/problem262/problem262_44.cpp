/*
 * author :Sadik Hassan(_sad_)
 *
*/
#include "bits/stdc++.h"
using namespace std;
using ll=            long long;
using ld=            long double;
#define nl            "\n"
#define pb            push_back
#define fi            first
#define se            second
#define MP            make_pair
#define PI            (acos(-1.0))
#define rep1(i,n)     for(int i=1;i<=n;i++)
#define rep(i,n)      for(int i=0;i<n;i++)
#define SZ(s)         (int)s.size()
#define all(x)        (x).begin(), (x).end()
#define rall(x)       (x).rbegin(), (x).rend()
#define w(t)          int t;cin>>t;while(t--)
#define TSU(s)        transform(s.begin(),s.end(),s.begin(),::toupper);
#define TSL(s)        transform(s.begin(),s.end(),s.begin(),::tolower);
#define _SAD()     	  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cout<<fixed<<setprecision(15);

typedef vector<int> vi;
typedef vector<ll> vii;
typedef set<int> si;
typedef set<ll> sii;
/*---------------------------------------------------------------------*/

const int N = (int)1e6+1;
const int MOD =(int)1e9+7;
const ll INF = (ll)1e18+5;

int main()
{
    _SAD()
    int n;
    cin>>n;
    vi a(n),b(n);
    rep(i,n)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(all(b));
    int x=b[n-1],y=b[n-2];
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<y<<nl;
        }
        else cout<<x<<nl;
    }
    return 0;
}
