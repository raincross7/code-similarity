#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x,y;
    cin>>x>>y;
    if(abs(x-y)<=1)
    {
        cout<<"Brown\n";
    }
    else
    {
        cout<<"Alice\n";
    }
    return 0;
}
