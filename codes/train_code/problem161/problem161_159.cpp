#include <bits/stdc++.h>
#include <math.h>
#define REP(i, n) for(int i = 0; i < (n); i++)
#define ALL(v) (v).begin(), (v).end()
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1001001001;
const int mINF = -1001001001;


int main() {
char a,b;
cin >> a >> b;
string ans="H";
if(a=='D'||b=='D') {
  if(a!=b) ans="D";
}
cout << ans << endl;
return 0;
}