#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define rep(i, n) for(int i=0; i<n; i++)

using namespace std;

int main(){
  int N;
  cin >> N;
  int A[N], B[N];
  rep(i, N)
    cin >> A[i];
  rep(i, N)  
    cin >> B[i];
  // 入力終了

  // 現在の準備と必要な準備度の差分
  int sub[N];
  rep(i, N)
    sub[i] = A[i] - B[i];
  
  sort(sub, sub+N);

  int ans = 0;
  
  // 足りない準備度の和 (マイナスだったら足せばOK)
  long long sum = 0;
  rep(i, N){
    // 準備度が足りない
    if(sub[i] < 0){
      sum += sub[i];
      // 準備度が足りないなら変更しないといけない
      ans++;
    }
    // 準備度が足りてるならそれ以降は見なくてOK
    else
      break;
  }

  // 正のほうが計算しやすい
  sum = -sum;
  
  // 余剰の準備度から分配していく
  for(int i=N-1; i>=0; i--){
    // 分配し終わった
    if(sum <= 0)
      break;
    // 途中でsub[i]<0になったら100％ムリ
    if(sub[i] < 0){
      cout << -1 << endl;
      return 0;
    }

    // 余剰分を引いていく
    sum -= sub[i];
    ans++;
  }

  // 解答
  cout << ans << endl;
  
  return 0;
}
