#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n;
    cin>>n;
    if(n<=111) cout<<"111"<<endl;
    else if((n>111) && (n<=222)) cout<<"222"<<endl;
    else if((n>222) && (n<=333)) cout<<"333"<<endl;
    else if((n>333) && (n<=444)) cout<<"444"<<endl;
    else if((n>444) && (n<=555)) cout<<"555"<<endl;
    else if((n>555) && (n<=666)) cout<<"666"<<endl;
    else if((n>666) && (n<=777)) cout<<"777"<<endl;
    else if((n>777) && (n<=888)) cout<<"888"<<endl;
    else if(n>888 && n<=999) cout<<"999"<<endl;

    return 0;
}