#include <iostream>
#include <stdio.h>
#include <cctype>
using namespace std;

int main () {
  char ch;
  while (true) {
    scanf("%c", &ch);
    if (islower(ch)) {
      cout << (char) toupper(ch);
    } else if (isupper(ch)) {
      cout << (char) tolower(ch);
    } else if (ch == '\n') {
      cout << endl;
      break;
    } else {
      cout << ch;
    }
  }
}