#include <bits/stdc++.h>
using namespace std;

int main(){
  int r,d;
  vector<int> x(11);
  cin>>r>>d>>x[0];

  for(int i=1; i<=10; i++){
    x[i] = r*x[i-1]-d;
    cout<<x[i]<<endl;
  }
}