#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++) 
#define all(v) begin(v),end(v)
using ll = long long;

int main() {
  int x;cin>>x;
  for(int i=1;i<=x;i++){
    if(360*i%x==0){
      cout<<360*i/x<<endl;
      return 0;
    }
  }
}