#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using P = pair<int, int>; 
using ll = long long;

int main()
{
  int a,b;
  cin >> a >> b;
  if(a * 500 >= b){
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}