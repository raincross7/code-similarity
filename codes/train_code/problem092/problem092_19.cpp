#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&a!=c)
        cout<<c;
    else if(a==c&&a!=b)
        cout<<b;
    else if(b==c&&b!=a)
        cout<<a;
    else
    return 0;
}
