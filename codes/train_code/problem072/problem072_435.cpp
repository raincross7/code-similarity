#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<pii >
#define vll vector<ll >
#define cps CLOCKS_PER_SEC
#define eb emplace_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1)
#define all(a) (a).begin(), (a).end()
#define sz(a) int((a).size())
#define print(s) cout<<#s<<" : ";for(auto i:(s))cout<<i<<" ";cout<<"\n";
#define slld(t) scanf("%lld",&(t))
#define sd(t) scanf("%d",&(t))
#define pd(t) printf("%d\n",(t))
#define plld(t) printf("%lld\n",(t))
#define endl "\n"

const int N = 1e7+10;
int dp[N];
int main()
{
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3;i<N;i++)
    {
        int k = sqrt(2*i)-1;
        while(1)
        {
            if(dp[i-k] < k)
            {
                dp[i] = k;
                break;
            }
            k++;
        }
    }   
    int n;
    cin>>n;
    vi vec;
    while(n > 0)
        vec.eb(dp[n]),n-=dp[n];
    sort(all(vec));
    for(int x:vec)
        cout<<x<<endl;
}