#include <iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    int sum=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<k;i++)
    {
       sum=sum+arr[i];
    }   
    cout<<sum<<endl;
}



