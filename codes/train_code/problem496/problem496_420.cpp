#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<long long> V(N);
  for (int i=0; i<N; i++) {
    cin >> V[i];
  }
  sort(V.begin(), V.end());
  reverse(V.begin(), V.end());
  long long S=0;
  for (int i=K; i<N; i++) {
    S+=V[i];
  }
  cout << S << endl;
}