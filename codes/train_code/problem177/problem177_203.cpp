#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    string s ;
    cin >> s ;
    if (((s[0] != s[1]) & (s[0] != s[2]) & (s[0] != s[3])) || ((s[1] != s[0]) & (s[1] != s[2]) & (s[1] != s[3])) || ((s[2] != s[0]) & (s[2] != s[1]) & (s[2] != s[3])) || ((s[3] != s[0]) & (s[3] != s[1]) & (s[3] != s[2])) || ((s[1] == s[0]) & (s[1] == s[2]) & (s[1] == s[3]))) {
        cout << "No" ;
    }
    else {
        cout << "Yes" ;
    }
    return 0;
}
