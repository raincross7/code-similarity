#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int h,w;
  cin >> h >> w;
  
  string s[h];
  rep(i,h) cin >> s[i];
  
  rep(i,h){
    cout << s[i] << endl << s[i] << endl;
  }
}