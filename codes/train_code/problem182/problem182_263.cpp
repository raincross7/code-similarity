#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+b)<(c+d))
    {
        cout<<"Right"<<endl;
    }
    else if((a+b)==(c+d))
    {
        cout<<"Balanced"<<endl;
    }
    else if((a+b)>(c+d))
    {
        cout<<"Left"<<endl;
    }
    return 0;
}
/*
Left
Balanced
Right

*/