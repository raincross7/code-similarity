#include <bits/stdc++.h>
using namespace std;

// 小数点以下桁数
// fixed << setprecision(i)

int gcd(int a,int b){return (a%b==0?b:gcd(b, a%b));}
int lcm(int a,int b){return a*b/gcd(a, b);}

int main()
{
  int n, ans = 1;
  char c;
  string s;

  cin >> n >> s;
  c = s[0];
  for (int i = 1; i < n; i++)
  {
    if (c != s[i])
    {
      c = s[i];
      ans++;
    }
  }
  cout << ans << endl;
}