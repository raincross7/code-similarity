#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,ans=0;cin>>a>>b;
    
    if(a==1)a=14;
    if(b==1)b=14;
    
    if(a>b)cout<<"Alice"<<endl;
    if(a<b)cout<<"Bob"<<endl;
    if(a==b)cout<<"Draw"<<endl;

	return 0;
}