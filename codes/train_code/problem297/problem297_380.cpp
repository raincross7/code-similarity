#include<bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i= (a); i < (b); ++i)
typedef long long ll;
typedef pair<int,int> P;
const int INF = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
int main() { string a, b, c;
  cin >> a >> b >> c;
  if(a[a.size()-1]==b[0]&&b[b.size()-1]==c[0]){
    puts("YES");
  }else{
    puts("NO");
  }
}