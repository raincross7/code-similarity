#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int MOD=1000000007;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  double sum=1.0;
  rep(i,n) {
    cin >> a[i]; sum*=a[i];
  }
  double b=0.0;
  rep(i,n) {
    b+=sum/a[i];
  }
  double ans=sum/b;
  printf("%.10f", ans);
}