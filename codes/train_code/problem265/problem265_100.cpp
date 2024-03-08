#include "bits/stdc++.h"
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> boal(N);
  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    num--;
    boal[num] += 1;
  }
  sort(boal.begin(), boal.end());
  int sum = 0;
  int i = 0;
  int cnt = 0;
  for(int i = 0; i < N - K; i++){
    sum += boal[i];
  }
  cout << sum << endl;
}