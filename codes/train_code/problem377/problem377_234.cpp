#include <bits/stdc++.h>
#define eps 1e-3
#define pi acos(-1.0)
#define inf 0x3f
#define INF 0x3f3f3f3f
#define pb push_back
#define debug1 cout<<"&&";
#define debug2 cout<<"**";
#define ms(a, x) memset(a, x, sizeof(a))
#define for0(i, n) for(int i = 0; i < n; ++i)
#define for1(i, n) for(int i = 1; i <= n; ++i)
using namespace std;
typedef double db;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, int> pli;
typedef pair<long long, long long> pll;
const int mod = 1e9 + 7;
const int N = 1e2 + 10;
const int M = 1e5 + 10;
/*=================================================================================*/

int n, k, a[N];
ll dp[M], sum[M];

int main() {
   ms(dp, 0);
   dp[0] = 1;
   scanf("%d %d", &n, &k);
   for1(i, n) scanf("%d", &a[i]);
   for1(i, n) {
      ms(sum, 0);
      for(int j = k; j >= 0; --j) {
         int l = j+1, r = j + min(k - j, a[i]);
         if(l > r) continue;
         sum[l] = (sum[l] + dp[j]) % mod;
         sum[r+1] -= dp[j];
         if(sum[r+1] < 0) sum[r+1] += mod;
         // debug1 printf("%d %d %lld %lld\n", l, r, dp[j], sum[l]);
      }
      for1(j, k) {
         sum[j] = (sum[j] + sum[j-1]) % mod;
         dp[j] = (dp[j] + sum[j]) % mod;
      }
   }
   printf("%lld\n", dp[k]);
   return 0;
}