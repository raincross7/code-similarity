#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    
    if(r<1200)
    cout<<"ABC";
    else if(r>=1200 && r<2800)
    cout<<"ARC";
    else if(r>=2800 && r<=4208)
    cout<<"AGC";
}