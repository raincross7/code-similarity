#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <math.h>
#include <stack>
#include <string>
#include <string.h>
using namespace std;
double PI = 3.1415926535897932;
long mod = 1000000007;

int main() {
  long n, T, t[300000];
  cin >> n >> T;
  for(int i = 0; i < n; i++)
    cin >> t[i];

  long sum = 0;
  for(int i = 0; i < n-1; i++) {
    if(t[i] + T <= t[i+1]) sum += T;
    else {
      sum += t[i+1] - t[i];
    }
  }
  sum += T;
  cout << sum << endl;
}
