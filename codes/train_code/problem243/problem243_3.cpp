#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll = long long;
int main(void){
   string S,T;
   cin>>S>>T;
   int cnt=0;
   
   rep(i,3){
       if(S[i]==T[i]){
           cnt++;
       }
   }
   cout<<cnt<<endl;
}
