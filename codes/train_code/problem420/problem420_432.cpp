#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    if(a==b) puts("YES");
    else puts("NO");
    return 0;
}