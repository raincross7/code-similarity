#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin>>h>>w;
  string c[h];
  for (int i=0; i<h; i++) cin>>c[i];
  for (int i=0; i<2*h; i++) {
    cout<<c[i/2]<<endl;
  }
}