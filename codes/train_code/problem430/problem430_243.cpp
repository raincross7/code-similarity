#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int a, b;
  cin >> a >> b;
  cout << a/b << " " << a%b << " " << fixed << setprecision(10) << (double)a/b << endl;
  return 0;
}