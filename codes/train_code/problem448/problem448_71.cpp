#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define int long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>
#define all(x) (x).begin(), (x).end()
#define forn(i,n) for(int i=0;i<(n);i++)
#define for1(i,n) for(int i=1;i<(n);i++)
const int MOD = 987654319;// 1e9 + 7 ;
int mpow(int a,int b,int p=MOD){a=a%p;int res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const int N=300002;

int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

       int n;
      cin>>n;
      cout<<(n-2)*180;
}