#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<vector<char>> a(2, vector<char>(3));
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
      cin >> a[i][j];
  }
  cout << (a[0][0] == a[1][2] && a[0][1] == a[1][1] && a[0][2] == a[1][0] ? "YES" : "NO") << endl;
}
