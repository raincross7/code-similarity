#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    string ans="Yes";
    if(s[a]!='-')
    {
        ans="No";
    }
   for(int i=0;i<a;i++)
   {
       if(!isdigit(s[i]))
       {
           ans="No";
       }
   }
    for(int i=a+1;i<(a+b+1);i++)
   {
       if(!isdigit(s[i]))
       {
           ans="No";
       }
      
   }
 cout<<ans<<"\n";
return 0;
}