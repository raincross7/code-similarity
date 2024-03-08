#include<bits/stdc++.h>
using namespace std;
using ll=long long;
constexpr ll mod=1e9+7;

int main()
{
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for(auto&& e: a) 
  {
    cin>>e;
  }

  for (int i = 0; i < min(k,100); ++i)
  {
    vector<int> tmp(n,0);
    for (int j = 0; j < n; ++j)
    {
      int l=max(0,j-a[j]);
      int r=j+a[j]+1;
      tmp[l]+=1;
      if (n>r) tmp[r]-=1;
    }
    for (int i = 0; i < n-1; ++i)
    {
      a[i]=tmp[i];
      tmp[i+1]+=tmp[i];
    }
    a[n-1]=tmp[n-1];
  }
  for(auto&& e: a) 
  {
    cout<<e<<" ";
  }
  cout<<endl;
}