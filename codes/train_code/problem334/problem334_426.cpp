#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main()
{
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;

  rep(i, n){
    cout << s.at(i) << t.at(i);
  }
  // cout << st;
}
