#include <iostream>
#include <string>

using namespace std;
//????????§???????????§???????????¨????????±??????????????????
int main() {
  string line;
  while(true) {
    cin >> line;
    if(line == "0") break;
    int sum = 0;
    for(unsigned int i=0; i<line.length(); i++) {
      sum += line[i] - '0';
    }
    cout << sum << endl;
  }
  return 0;
}