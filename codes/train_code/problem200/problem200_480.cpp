#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define REPS(i, a, b) for (int i = (a); i < (b); ++i)
using namespace std;
using ll = long long;

int main() {
  int a,b;
  cin >> a >> b;
  if(a % 2 == 0 || b % 2 == 0){
    cout << "Even" << endl;
    return 0;
  }
  cout << "Odd" << endl;
}