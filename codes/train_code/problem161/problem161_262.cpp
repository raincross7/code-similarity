#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    string b;
    cin >> a;
    cin >>b;
    if(a == "H" && b == "H")
    {
        cout <<"H" <<endl;
    }
    else if(a == "D" && b == "H")
    {
        cout << "D" <<endl;
    }
    else if(a == "H" && b == "D")
    {
        cout << "D" <<endl;
    }
    else if(a == "D" && b == "D" )
    {
        cout << "H" <<endl;
    }
    return 0;

}
