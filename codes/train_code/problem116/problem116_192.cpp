#include <bits/stdc++.h>
using namespace std;
int main(){
  int N,M;cin>>N>>M;
  vector<vector<int>>A(N+1);
  vector<int>B(M);
  vector<int>C(M);
  for(int i=0;i<M;i++){
    cin>>B[i]>>C[i];
    A[B[i]].push_back(C[i]);
  }
  for(int i=0;i<=N;i++)sort(A[i].begin(),A[i].end());
  for(int i=0;i<M;i++){
    int a=B[i];
    int b=lower_bound(A[a].begin(),A[a].end(),C[i])-A[a].begin()+1;
    cout<<a/100000<<(a/10000)%10<<(a/1000)%10<<(a/100)%10<<(a/10)%10<<a%10<<b/100000<<(b/10000)%10<<(b/1000)%10<<(b/100)%10<<(b/10)%10<<b%10<<endl;
  }
}