#include<bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i= (a); i < (b); ++i)
typedef long long ll;
typedef pair<int,int> P;
const int INF = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
int main() { string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  char t = 'a' - 'A';
  cout << (char)(s1[0] - t) << (char)(s2[0] - t) << (char)(s3[0] - t) << endl;
}