#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   sort(a,a+n);
   for(int i=0;i<n;i++)
   {
      if(i>0)
         cout<<" ";
      cout<<a[i];
   }
   cout<<endl;
   return 0;
}