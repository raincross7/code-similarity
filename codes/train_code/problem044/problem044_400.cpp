#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >>n;
  vector<int>a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  long long sum=a[0];
  for(int i=1;i<n;i++){
    sum+=max(0,a[i]-a[i-1]);
  }
  cout<<sum<<endl;
  return 0;
}