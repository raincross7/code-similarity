#include <iostream>
#include <string>
using namespace std;
int main (void){
  string s;
  cin >> s;
  if(s[0] == s[1] && s[0] == s[2] && s[0] == s[3]){cout << "No" << endl;}
  else{
    if(s[0] == s[1] && s[2] == s[3]){cout << "Yes" << endl;}
    else if(s[0] == s[2] && s[1] == s[3]){cout << "Yes" << endl;}
    else if(s[0] == s[3] && s[1] == s[2]){cout << "Yes" << endl;}
    else{cout << "No" << endl;}
  }
  return 0;
}
 