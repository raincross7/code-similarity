

#include<bits/stdc++.h>
using namespace std;
#define ll long  long int 

int main()
{   
  
    ll n;
    cin>>n;
    long double d=(double)(n*n*n)/27;
    string s=to_string(d);
    for(int i=0;i<6;i++)
    {
        s+='0';
    }
    cout<<s<<endl;


    return 0;
}