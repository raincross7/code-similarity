#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0] == s[1] && s[1] != s[2] && s[2] == s[3]){
        cout<<"Yes";
    }
    else if(s[0] == s[2] && s[2] != s[1] && s[1] == s[3]){
        cout<<"Yes";
    }
    else if(s[0] == s[3] && s[3] != s[1] && s[1] == s[2]){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}
