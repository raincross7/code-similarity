#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,n) for(int i=0;i<(n);++i)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define all(x) (x).begin(), (x).end()
#define PI 3.14159265358979323846264338327950L
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
  int n;
  cin>>n;
  int i;
  for(i=1;i<=7;i++){
    if(n<pow(2,i)) break;
  }
  cout<<pow(2,i-1);
}