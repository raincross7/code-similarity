#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
  ll n,m,k;
  cin >> n >> m >> k;
  bool ok=false;
  for(int i=0;i<=n;++i){
    for(int j=0;j<=m;++j){
      if((i*(m-j)+j*(n-i))==k) ok=true;
    }
  }
  if(ok){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
