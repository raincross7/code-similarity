#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;	cin >> n >> m;
  int ans=0;
  ans+=n*(n-1)/2+m*(m-1)/2;
  cout << ans;
}