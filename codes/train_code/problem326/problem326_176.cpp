#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a>=b)
    cout << b*c + (a-b)*d << endl;
    else
        cout << a*c << endl;
}
