#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>

using namespace std;

int main() {
  int h,w;
  char c[200][200];
  cin >> h >> w;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++)
      cin >> c[i][j];
  }
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++)
      cout << c[i][j];
    cout << endl;
    for(int j = 0; j < w; j++)
      cout << c[i][j];
    cout << endl;
  }
}