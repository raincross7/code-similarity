#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); 
  cin.tie(0); 

  int a, b;
  char c;
  cin >> a >> c >> b;

  if (c == '+') cout << a + b << "\n";
  else cout << a - b << "\n";

}
