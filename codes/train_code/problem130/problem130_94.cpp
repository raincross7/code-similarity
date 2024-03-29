#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
//#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using vi = vector<int>;
using Graph = vector<vi>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int N;
  cin >> N;
  vi P(N), Q(N), A(N);
  REP(i, N) { cin >> P.at(i); }
  REP(j, N) { cin >> Q.at(j); }
  REP(k, N) { A.at(k) = k + 1; }
  int p = 0, q = 0, count = 0;
  do {
    count++;
    if (P == A) p = count;
    if (Q == A) q = count;
  } while (next_permutation(A.begin(), A.end()));

  cout << abs(p - q) << endl;
}