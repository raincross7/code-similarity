#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
int main()
{
   int a, b;
   char op;
   cin >> a >> op >> b;
   if (op == '+')
   {
      cout << a + b << endl;
   }
   else if (op == '-')
   {
      cout << a - b << endl;
   }
   return 0;
}
