#include<bits/stdc++.h>
using namespace std;
int main(){
int N,K;
cin>>N>>K;
if(K==1)cout<<0;
else if(N>K)cout<<N-K;
else cout<<0;
return 0;
}