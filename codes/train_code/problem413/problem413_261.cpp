#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long LL;

int main() {
  int n[] = {1,  1,  1,  2,  1,  2,  1,  5,  2,  2,  1,  5,  1,  2,  1,  14,  1,  5,  1,  5,  2,  2,  1,  15,  2,  2,  5,  4,  1,  4,  1,  51};
  int K; cin >> K;
  cout << n[K-1] << endl;
}
