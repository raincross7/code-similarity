#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  int cnt=0,cnt2=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='0')cnt++;
    if(s[i]=='1')cnt2++;
  }
  cout << 2*min(cnt,cnt2) << endl;
}