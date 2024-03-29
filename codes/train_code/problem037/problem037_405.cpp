#include <bits/stdc++.h>

using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int, int> Pii;
typedef pair<int, ll> Pil;
typedef pair<ll, ll> Pll;
typedef pair<ll, int> Pli;

#define fi first
#define se second

const ll MOD = 1e9 + 7;
const ll MOD2 = 998244353;
const ll MOD3 = 1812447359;
const ll INF = 1ll << 62;
const double PI = 2 * asin(1);

void yes() {printf("yes\n");}
void no() {printf("no\n");}
void Yes() {printf("Yes\n");}
void No() {printf("No\n");}
void YES() {printf("YES\n");}
void NO() {printf("NO\n");}

int H, N;
int A[int(1e3+5)], B[int(1e3+5)];
int DP[int(1e3+5)][int(1e4+5)];

int main(){
  cin >> H >> N;
  for (int i = 1; i <= N; i++){
    cin >> A[i] >> B[i];
  }

  fill((int*)DP, (int*)(DP + N + 1), 1e9);
  DP[0][H] = 0;

  for (int i = 1; i <= N; i++){
    for (int j = H; j >= 0; j--){
      DP[i][j] = DP[i-1][j];
    }
    for (int j = H; j >= 0; j--){
      int next = max(j - A[i], 0);
      DP[i][next] = min(DP[i][next], DP[i-1][j] + B[i]); 
    }

    for (int j = H; j >= 0; j--){
      int next = max(j - A[i], 0);
      DP[i][next] = min(DP[i][next], DP[i][j] + B[i]);
    }
  }
  cout << DP[N][0] << endl;

  return 0;
}
