#include <iostream>
#include <string>
 
using namespace std;
 
int main () {
  char c;
  cin >> c;
  if (c == 'a'||c == 'i'||c == 'u'||c == 'e'||c == 'o')
    cout << "vowel";
  else
    cout << "consonant";
}