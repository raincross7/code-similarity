#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define int long long int
#define vi vector<int>
#define vvi vector < vi >
#define pii pair<int,int>
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define tr(k,st,en) for(int k = st; k <= en ; k++)
#define trb(k,en,st) for(int k = en; k >= st ; k--)
using namespace std;

int32_t main()
{
    std::ios::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    int ans = 0;
    tr(i,k,n+1){
        ans  = (ans + (i*(n-i+1)) + 1)%mod;
    }
    cout<<ans<<endl;
    return 0;
}


