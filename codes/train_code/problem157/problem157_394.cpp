// Princess's Marriage
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int N, M;
pair<int,int> PD[10010];
pair<int,int> PD2[10010];
int main() {
  while (cin >> N >> M && N) { 
    int d, p;
    for (int i=0; i<N; ++i) {
      cin >> d >> p;
      PD[i] = make_pair(p, d); 
      // PD[i].first ??????i?????±?????? p
      // PD[i].second ??????i?????????  d
    }
    sort(PD,PD+N); // PD ?????§??????????????´????????????
    for (int i=0;i<N; ++i)
      PD2[N-i-1] = PD[i];
    int S = 0;
    for (int i=0; i<N; ++i)
      S += PD2[i].first * PD2[i].second;
    // ??????0?????????????????????,?????¨???S??????
    for (int i=0; i<N; ++i) {
      if (M <= 0) break;
      int guarded = min(M,PD2[i].second); // ????????????
      S -= PD2[i].first * guarded;
      M -= guarded;
    }
    cout << S << endl;
  }
}