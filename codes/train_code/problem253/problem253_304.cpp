#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define rep(i, n) ;for (int i = 0;i < (int)(n);i++)
#define rep2(i, s, n) ;for (int i = s; i < (int)(n);i++)
#define ALL(vec)  (vec).begin(),(vec).end()
#define pi 3.1415926535897932384626433832795
#define MAX_INF 9223372036854775807
#define MIN_INF (922337203685477587+1)
#define sosuu 1000000007

int main() {
  int N,M,X,Y;
  int maxx=-1000,miny=1000;
  cin >> N >> M >> X >> Y;
  int a,b;
  rep(i, N){
  cin >> a;
    maxx=max(maxx,max(a,X));
  }
  rep(i, M){
  cin >> b;
    miny=min(miny,min(Y,b));
  }
  if(maxx<miny)
    cout <<"No War" << endl;
  else
    cout << "War" << endl;
}