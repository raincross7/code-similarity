#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,m;
    cin>>n>>m;
    cout<<(1900*m+100*(n-m))*pow(2,m)<<endl;
}