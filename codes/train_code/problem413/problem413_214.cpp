#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[32]={1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51} ;
   int n;
   cin>>n;
   for(int i=0;i<32;i++)
   {
       if(n==i+1)
       {
           cout<<a[i]<<endl;
       }
   }
}
