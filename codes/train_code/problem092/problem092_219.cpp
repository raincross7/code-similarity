#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> a(3);
  for(int i = 0;i<3;i++){
    cin >> a[i];
  }
  sort(a.begin(),a.end());
  if(a[0] == a[1])cout << a[2] << endl;
  else cout << a[0] << endl;
}
