#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int x=s.size();
  int cnt=0;
  for (int i=0;i<x-1;++i){
    if (s[i]!=s[i+1]) cnt++;
  }
  cout << cnt << endl;
}