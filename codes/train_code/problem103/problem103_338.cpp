#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  sort(s.begin(),s.end());
  for(int i = 0; i < s.size()-1; i++){
    if(s[i] == s[i+1]){
      cout << "no" << endl;
      return 0;
    }
  }
  cout << "yes" << endl;
  return 0;
}