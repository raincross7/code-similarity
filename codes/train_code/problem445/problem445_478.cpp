#include<bits/stdc++.h>
using namespace std;

int main(){
  int n ,r;
  cin >> n >> r;

  cout << r + 100 * (10 - min(10,n)) << endl;
}
