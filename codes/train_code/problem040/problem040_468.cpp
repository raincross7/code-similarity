#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[100001],n;

    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    cout<<arr[n/2]-arr[n/2-1]<<endl;

}
