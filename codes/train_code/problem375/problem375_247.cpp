#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> v(10);
  for (int i = 0; i < 10; i++)
    cin >> v[i];
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  for (int i = 0; i < 3; i++)
    cout << v[i] << endl;

  return 0;
}