
#include <bits/stdc++.h>
#include <string.h>
#include <vector>
//s#define rep(i, n) for (int i = 0; i < (n); i++)
#define MAX 10000

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define rep(i,a,n) for(int i=a; i<n; i++)
#define r0 return 0
#define INF (int)1e15
#define MOD 1000000007

int main(){

 ll n;
 cin>>n;
 ll a[n];

for(int i=0;i<n;i++)
    cin>>a[i];

 ll ans = a[0];

   for(int i=0;i<n;i++)
    ans = lcm(ans,a[i]);

    cout<<ans<<endl;

return 0;
}
