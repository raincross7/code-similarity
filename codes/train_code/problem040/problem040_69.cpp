#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int d[n];
    for(int i=0;i<n;i++)cin>>d[i];
    sort(d,d+n);
    
    if(d[n/2]==d[n/2-1])cout<<0<<endl;
    else cout<<d[n/2]-d[n/2-1]<<endl;
    return 0;
}