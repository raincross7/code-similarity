#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if(abs(a-c) <= d || (abs(a-b) <= d && abs(b-c) <= d)){
    print("Yes");
  } else {
    print("No");
  }

}
