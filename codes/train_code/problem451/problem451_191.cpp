#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int c = 0;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if(a >= m) c++;
  }
  cout << c << "\n";
}