#include<bits/stdc++.h>
using namespace std;

signed main()
{
  string a,b; cin >> a >> b;
  reverse(b.begin(),b.end());
  if(a==b) cout << "YES";
  else cout << "NO";
}