#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define rrep2(ri,x,n) for(int ri = (int)(n-1); ri >= (int)(x); ri--)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(x) x.begin(), x.end()
using ll = long long;
using namespace std;

bool fc(int n){
  int chk = n % 10;
  n /= 10;
  while(n != 0){
    if((n%10) != chk) return false;
    n /= 10;
  }
  return true;
}

int main(){
  int n;
  cin >> n;
  while(1){
    if(fc(n) == true){
      cout << n << endl;
      return 0;
    }
    n++;
  }
  return 0;
}