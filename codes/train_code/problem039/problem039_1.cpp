#include <algorithm>
#include <cstdio>
typedef long long lld;
const lld INFN = 3e11+5;
const int MAXN = 305;
lld dp[MAXN][MAXN];
int  H[MAXN];
int K, N;

void init() {
  for (int i = 1; i <= N; ++i) {
    for (int j = 1; j <= N; ++j) {
      dp[i][j] = INFN;
    }
  }
}

lld solve() {
  for (int i = 1; i <= N; ++i) {
    dp[i][1] = H[i];
  }
  for (int i = 1; i <= N; ++i) {
    for (int j = 2; j <= i; ++j) {
      lld val = INFN;
      for (int k = 1; k < i; ++k) {
        lld prev = dp[k][j-1];
        if (prev == INFN) continue;
        if (H[i] > H[k]) {
          prev += (H[i] - H[k]);
        }
        val = std::min(prev, val);
      }
      dp[i][j] = val;
    }
  }
  lld ret = INFN;
  for (int i = N-K; i <= N; ++i) {
    ret = std::min(dp[i][N-K], ret);
  }
  return ret;
}

int main() {
  scanf(" %d%d", &N, &K);
  for (int i = 1; i <= N; ++i) {
    scanf("%d", &H[i]);
  }
  H[0] = 0;
  init();
  printf("%lld\n", solve());
  return 0;
}