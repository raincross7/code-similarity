#include <iostream>

using namespace std;

int main()
{
    int x,y,z; cin>>x>>y>>z;
    if(x==y) cout<<z;
    else if(y==z) cout<<x;
    else if(z==x) cout<<y;
    return 0;
}
