#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,s,t=0;
    cin>>n>>s;
    long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=s)
         t++;
    }
    cout<<t;
    return 0;
}
     
   


