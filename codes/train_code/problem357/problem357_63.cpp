#include <bits/stdc++.h>
#define rep(i,a,n) for(int i =a; i<n; i++) 
#define ll long long
#define MOD 1000000007
using namespace std;
  
int main() {
  int M; cin >> M;
  ll keta =0, sum =0;
  ll d[M],c[M]; 
  rep(i,0,M) {
    cin >> d[i] >> c[i];
    keta += c[i]; sum += d[i] * c[i];
  }
 
  cout << keta + (sum-1)/9 -1 << endl;

}