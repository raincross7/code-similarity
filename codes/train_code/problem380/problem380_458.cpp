#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum>n) cout<<-1<<endl;
    else cout<<n-sum<<endl;
}
