#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N,M;
  cin >> N >> M;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  int sum = accumulate(A.begin(),A.end(),0);
  sort(A.rbegin(),A.rend());
  rep(i,M) {
    if(sum > A[i]*4*M) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}