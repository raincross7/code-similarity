#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin >> n >> a;
  while(n>=500){
    n -= 500;
  }
  if(a >= n)
  cout << "Yes" << endl;
  else
  cout << "No" << endl;
}
