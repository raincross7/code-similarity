#include<bits/stdc++.h>
using namespace std;
int main(){
int64_t N,M;
  cin>>N>>M;
  if(N==1 && M==1)
    cout<<1<<endl;
  else if(N==1 || M==1){
   int64_t ans=max(N,M)-2;
    cout<<ans<<endl;
  }else{
  int64_t ans=(N-2)*(M-2);
    cout<<ans<<endl;
  }
    
    return 0;
}