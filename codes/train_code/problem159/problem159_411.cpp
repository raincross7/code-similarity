#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long int ll;
typedef unsigned long long int ull;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a,b,c,ans;
  string s,t;
  cin >>a;
  b=a;
  ans=1;
  while(b!=0){
    b+=a;
    ans++;
    if(b>=360)b-=360;
  }
  cout <<ans;
}