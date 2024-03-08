#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, s, e) for (int i = (int)(s); i <= (int)(e); i++)
#define printYesNo(is_ok) puts(is_ok ? "Yes" : "No");
#define SORT(v) sort(v.begin(), v.end());
#define RSORT(v) sort(v.rbegin(), v.rend());
#define REVERSE(v) reverse(v.begin(), v.end());

template <typename T>
void printlnVector(T v)
{
  rep(i, v.size())
  {
    cout << v[i] << endl;
  }
}

template <typename T>
void printVector(T v)
{
  rep(i, v.size())
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main()
{
  string S;
  cin >> S;
  bool is_ok = false;
  rep(i, S.size())
  {
    rep(j, S.size())
    {
      string temp = S.substr(0, i - 1);
      temp += S.substr(j, S.size());
      if (temp == "keyence")
        is_ok = true;
    }
  }

  if (is_ok)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}