#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  cout << int(n % k != 0) << endl;
}
