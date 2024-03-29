#include <cstring>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

string left_str = "qwertasdfgzxcvb";
int GetType(string c)
{
  return (left_str.find(string(c)) == string::npos) ? 0 : 1;
}

int main()
{
  string str;
  while (cin >> str && str != "#") {
    int type = GetType(str.substr(0, 1)), ret = 0;
    for (int i = 1; i < str.size(); i++) {
      if (GetType(str.substr(i, 1)) != type) {
        ret++;
      }
      
      type = GetType(str.substr(i, 1));
    }
    cout << ret << endl;
  }
}