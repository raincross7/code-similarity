#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)>c&&(a<c||a==c)){
        cout<<"YES"<<endl;
    }
    else if((a+b)<c||a>c){
         cout<<"NO"<<endl;
    }
    return 0;
}
