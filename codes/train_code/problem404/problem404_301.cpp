#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
int main()
{
   string s;
   cin >> s;
   rep(i, s.length())
   {
      if (s[i] == ',')
      {
         cout << " ";
      }
      else
      {
         cout << s[i];
      }
   }
   cout << endl;
   return 0;
}
