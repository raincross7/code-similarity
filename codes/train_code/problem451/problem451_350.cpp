#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    
    int c=0;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	if(a[i]>=x)
    	{
    		c++;
		}
	}
	cout<<c<<endl;
	
    
}