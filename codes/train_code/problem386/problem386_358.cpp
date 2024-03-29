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

int N; ll C, K, T[int(1e5+5)];

int main(){
  cin >> N >> C >> K;
  for (int i = 0; i < N; i++) cin >> T[i];
  sort(T, T + N);

  if (C == 1){
    cout << N << endl;
    return 0;
  }

  int ans = 1, cnt = 1; 
  ll lim = T[0] + K;
  for (int i = 1; i < N; i++){
    if (cnt == C){
      ans++; cnt = 1; lim = T[i] + K;
      continue;
    }
    if (lim < T[i]){
      ans++; cnt = 1; lim = T[i] + K;
      continue;
    }
    cnt++;
  }
  cout << ans << endl;

  return 0;
}
