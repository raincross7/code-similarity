#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;
  long long a[n];
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
    a[i] -= i;
  }
  sort(a,a+n);
  long long	sum = 0;
  for(int i=0; i<n; ++i) {
    sum += abs(a[i]-a[n/2]);
  }
  cout << sum;
}
