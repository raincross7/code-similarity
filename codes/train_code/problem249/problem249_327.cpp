#include <bits/stdc++.h>
#include <math.h>
#define _GLIBCXX_DEBUG
using namespace std;
int main() {
  
  int N;
  cin>>N;
  
  vector<int> vec(N);
  for(int i=0;i<N;i++){
    cin>>vec[i];
  }
  sort(vec.begin(),vec.end());
  
  
  double sum=vec[0];
  
  for(int i=1;i<N;i++){
    sum=(sum+vec[i])/2.0;
  }
  
  cout<<sum<<endl;
}