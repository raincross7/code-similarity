#include <stdio.h>

int main() {
  char s[4];
  scanf("%s", s);

  if(s[0] == s[1] && s[1] != s[2] && s[0] != s[2]) puts("Yes");

  else if(s[0] != s[1] && s[1] != s[2] && s[0] == s[2]) puts("Yes");

  else if(s[0] != s[1] && s[1] == s[2] && s[0] != s[2]) puts("Yes");

  else puts("No");

  return 0;
}
