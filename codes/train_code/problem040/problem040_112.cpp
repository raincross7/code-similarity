#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  sort(vec.begin(), vec.end());

  int diff = vec[N / 2] - vec[N / 2 - 1];

  cout << diff << endl;
}