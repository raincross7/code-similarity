#include <bits/stdc++.h>
using namespace std;
#define INF 1<<29 //使いやすい無限

int main(){
  int N;cin>>N;
  vector<int>wsum(N);
  cin>>wsum[0];
  for(int i=1; i<N; i++){
    int w;cin>>w;
    wsum[i] = wsum[i-1] + w;
  }
  int ans = INF;
  for(int i=0; i<N; i++){
    ans = min(ans, abs(wsum[N-1]-wsum[i]-wsum[i]));
  }

  cout<<ans<<endl;
}