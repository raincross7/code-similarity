#include <bits/stdc++.h>
using namespace std;

int main() {
  int N , K;
  cin >> N >> K;
  vector<int> V(N);
  for (int i=0; i<N; i++) {
    cin >> V[i];
  }
  sort(V.begin(), V.end());
  reverse(V.begin(), V.end());
  int S=0;
  for (int i=0; i<K; i++) {
    S+=V[i];
  }
  cout << S << endl;
}
