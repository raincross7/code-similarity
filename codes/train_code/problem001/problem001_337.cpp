#include <cstdint>
#include <iostream>

using namespace std;

int main() {
  int64_t r, D, x;
  cin >> r >> D >> x;
  
  for (int i = 1; i <= 10; ++i) {
    x = r * x - D;
    cout << x << endl;
  }
  
  return 0;
}
