#include<bits/stdc++.h>
using namespace std;
int main(){
  int N,L;
  cin>>N>>L;
  vector<string> s(N);
  for(int i=0;i<N;i++)
    cin>>s.at(i);
  sort(s.begin(),s.end());
  string D;
  for(int i=0;i<N;i++)
    D+=s.at(i);
  cout<<D;
}