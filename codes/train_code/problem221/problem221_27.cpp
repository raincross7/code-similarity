#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using P = pair<int, int>; 
using ll = long long;

int main()
{
  int a, b;
  cin >> a >> b;
  if(a % b) cout << 1 << endl;
  else cout << a % b << endl;
  return 0;
}
