
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int ans = min(b,d)-max(a,c);
    if(ans>-1)
        cout<<ans;
    else
        cout<<0;
    return 0;
}
