#include<bits/stdc++.h>
#define rep(i, n) for(int (i)=0 ;i <(n); ++(i))
#define REP(i,m,n) for(int (i) = (m); (i) <= (n); ++(i))
#define yorn(f) puts((f)?"Yes":"No")
#define YORN(f) puts((f)? "YES":"NO")
typedef long long ll;
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  yorn(a<=c && c<=b);
  return 0;
}