#include <bits/stdc++.h>
using namespace std;
int main(){
   string S;
   cin>>S;
   for(int i=0;i<12;i++){
     cout<<S[i];
     if(i==3){
       cout<<" ";
       break;
     }
   }
    for(int i=4;i<12;i++){
      cout<<S[i];
    }
  cout<<endl;
}