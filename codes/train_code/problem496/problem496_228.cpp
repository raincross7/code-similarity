#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a.at(i);
  }
  sort(a.begin(), a.end());
  for(int i=0;i<k;i++){
    a.at(n-1-i)=0;
    if(n-1-i==0){
      break;
    }
  }
  long long sum=0;
  for(int i=0;i<n;i++){
    sum=sum+a.at(i);
  }
  cout<<sum;
}