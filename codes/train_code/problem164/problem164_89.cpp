#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using pii = pair<int,int>;
const long long INF = 1LL << 60;

int k,a,b;

int main()
{
  cin >> k >> a >> b;
  if(a <= (b/k)*k) cout << "OK" << endl;
  else cout << "NG" << endl;
}