#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[3] == s[2] && s[4] == s[5])
        cout << "Yes";
    else
        cout << "No";

}