#include <bits/stdc++.h>
using namespace std;

int main(){
  int h1,m1,h2,m2,k;
  cin >> h1 >> m1 >> h2 >> m2 >> k;
  int st=h1*60+m1;
  int fi=h2*60+m2;
  int t=fi-st;
  cout << t-k << endl;
  return 0;
}
