#include <bits/stdc++.h>
using namespace std;

int main(){
    int c=0;
   string s,x;
   cin>>s>>x;
   for(int i=0,j=s.size()-1;i<s.size();i++,j--){
    if(s[i]==x[j])
        c++;
   }
   if(c==3)
    cout<<"YES";
   else cout<<"NO";

 return 0;
}
