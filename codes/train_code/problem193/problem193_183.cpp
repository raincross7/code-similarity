#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a,b,c,d;
    cin>>s;
    a=s[0]-'0';
    b=s[1]-'0';
    c=s[2]-'0';
    d=s[3]-'0';
    if(a+b+c+d==7)
        cout<<a<<'+'<<b<<'+'<<c<<'+'<<d;
    else if(a+b+c-d==7)
        cout<<a<<'+'<<b<<'+'<<c<<'-'<<d;
    else if(a+b-c-d==7)
        cout<<a<<'+'<<b<<'-'<<c<<'-'<<d;
    else if(a-b-c-d==7)
        cout<<a<<'-'<<b<<'-'<<c<<'-'<<d;
    else if(a+b-c+d==7)
        cout<<a<<'+'<<b<<'-'<<c<<'+'<<d;
    else if(a-b+c+d==7)
        cout<<a<<'-'<<b<<'+'<<c<<'+'<<d;
    else if(a-b-c+d==7)
        cout<<a<<'-'<<b<<'-'<<c<<'+'<<d;
    else if(a-b+c-d==7)
        cout<<a<<'-'<<b<<'+'<<c<<'-'<<d;
    cout<<"=7";
}
