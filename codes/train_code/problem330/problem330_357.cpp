#include <bits/stdc++.h>
using namespace std;

int main() {
  // 変数の型宣言と代入
  const int inf = 100000000; // とりあえず未確定な距離は無限にする用
  int N, M;
  cin >> N >> M;
  vector<int> a(1000), b(1000), c(1000);
  vector<vector<int>> dist(100, vector<int>(100));
  // 隣接ノードとリンクの代入
  for (int i = 0; i < M; i++) {
    cin >> a.at(i) >> b.at(i) >> c.at(i);
    // ノード番号はdistの位置を表す変数として使うため、
    //　0始まりになるように設定しておく。
    a.at(i)--;
    b.at(i)--;
  }

  // ↓ここから初期設定
  // -----------------------------------------------------------------
  // スタートノードとゴールノードが同じdistには0を
  // スタートノードとゴールノードが違うdistにはinfを代入
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) {
        dist.at(i).at(j) = 0;
      }
      else {
        dist.at(i).at(j) = inf;
      }
    }
  }
  //とりあえず隣接するノードの最短距離には接続リンクの値を代入
  for (int i = 0; i < M; i++) {
    dist.at(a.at(i)).at(b.at(i)) = min(dist.at(a.at(i)).at(b.at(i)), c.at(i));
    dist.at(b.at(i)).at(a.at(i)) = min(dist.at(b.at(i)).at(a.at(i)), c.at(i));
  }
  // -----------------------------------------------------------------
  // ↑ここまで初期設定

  // -----------------------------------------------------------------
  // ここでワーシャル・フロイド法とやらを使う
  for (int k = 0; k < N; k++) {
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        dist.at(i).at(j) = min(dist.at(i).at(j), dist.at(i).at(k) + dist.at(k).at(j));
      }
    }
  }
  // やったね! これで最短経路が求まったyo!
  // ------------------------------------------------------------------

  // ------------------------------------------------------------------
  // 最短経路に含まれないリンク数を数える。
  // 基本的に全てのリンクが最短経路に含まれないと仮定し、答えans = Mと置いておく。
  int ans = M;
  // リンクひとつひとつについて最短経路に含まれるか確認。初めにcount=0としておき、
  // そのリンクが最短経路に含まれる場合はcount++
  for (int i = 0; i < M; i++) {
    int count = 0;
    for (int j = 0; j < N; j++) {
      if (dist.at(j).at(b.at(i)) == dist.at(j).at(a.at(i)) + c.at(i)) {
        count++;
      }
    }
  // count=0のまま→何もしない
  // count>0→ans--
    if (count > 0) {
      ans--;
    }
  }
  // ----------------------------------------------------------------------

  cout << ans << endl;
}