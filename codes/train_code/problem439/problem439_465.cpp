#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,j,n) for(int i=j;i<=n;i++)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    f(i,0,n-1)
      cin>>a[i];
      
    sort(a,a+n);
    cout<<abs(a[0]-a[n-1]);
} 
