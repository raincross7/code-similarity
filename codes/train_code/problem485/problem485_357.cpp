#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,n) for(int i=0,_n=(int)(n);i<_n;++i)
#define ALL(v) (v).begin(),(v).end()
#define CLR(t,v) memset(t,(v),sizeof(t))
template<class T1,class T2>ostream& operator<<(ostream& os,const pair<T1,T2>&a){return os<<"("<<a.first<<","<<a.second<< ")";}
template<class T>void pv(T a,T b){for(T i=a;i!=b;++i)cout<<(*i)<<" ";cout<<endl;}
template<class T>void chmin(T&a,const T&b){if(a>b)a=b;}
template<class T>void chmax(T&a,const T&b){if(a<b)a=b;}


int nextInt() { int x; scanf("%d", &x); return x;}

int main2() {
  ll X, Y;
  cin >> X >> Y;
  if (abs(X - Y) <= 1) {
    cout << "Brown" << endl;
  } else {
    cout << "Alice" << endl;
  }
  return 0;
}
int naive(int x, int y) {
  int res = 0;
  for (int i = 1; i*2 <= x; i++) {
    if (naive(x - i*2, y+i) == 0) {
      return 1;
    }
  }
  for (int i = 1; i*2 <= y; i++) {
    if (naive(x+i, y-2*i) == 0) {
      return 1;
    }
  }
  return res;
}
int main() {

  // REP(x, 10) {
    // REP(y, 10) {
      // cout << naive(x, y) << " ";
    // }
    // cout << endl;
  // }
  // return 0;

  for (;!cin.eof();cin>>ws)
    main2();
  return 0;
}
