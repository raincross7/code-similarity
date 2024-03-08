#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()

using namespace std;
using ll = long long;

const double PI = 3.14159265358979;

void solve()
{
  int n;
  string s;
  cin >> n >> s;
  string ans = s;
  int status = 0;
  for(int i = 0; i < n; ++i)
  {
    if (s[i] == '(') status++;
    if (s[i] == ')') status--;
    if (status < 0)
    {
      ans = '(' + ans;
      status++;
    }
  }
  for(int i = 0; i < status; ++i)
  {
    ans += ')';
  }
  cout << ans;
}

int main()
{
  fastio;
  solve();

  return 0;
}