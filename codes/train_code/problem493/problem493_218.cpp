#include <bits/stdc++.h>
using namespace std;

int main() {
  long a,b,c,d;
  cin >> a >> b >> c >> d;
  cout << max(min(b,d)-max(a,c),0L) << endl;
}