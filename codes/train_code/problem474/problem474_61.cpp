#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
using namespace std;
int main(void){
  string s;
  cin >> s;
  
  cout << s.substr(0,4) << " " << s.substr(4,8) << endl;
  
  return 0;
}
