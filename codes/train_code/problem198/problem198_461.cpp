#include <bits/stdc++.h>
using namespace std;

int main() {
  string O, E;
  cin >> O >> E;
  
  if (O.size() == E.size()) {
    for (int i = 0; i < O.size(); i++) {
      cout << O[i] << E[i];
    }
    cout << endl;
  } else {
    for (int i = 0; i < O.size()-1; i++) {
      cout << O[i] << E[i];
    }
    cout << O[O.size()-1] << endl;
    
  }
  
}