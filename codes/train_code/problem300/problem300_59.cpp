#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
using namespace std;
using ll = long long;
using P=pair<int,int>;
using V=vector<vector<int>>;

int main(){
  int N, M, ans;
  cin >> N >> M;

  vector<int>a(N);

  //各電球について
  for(int i=0; i<M; i++){
    int k;
    cin >> k;

    for(int j=0; j<k; j++){
      int s;
      cin >> s;
      s--;
      a[s] |= 1 << i;
    }
  }
  
  int p=0;
  for(int i=0; i<M; i++){
    int x;
    cin >> x;
    p |= x << i;
  }

  for(int s=0; s<(1<<N); s++){
    int t=0;
    for(int i=0; i<N; i++){
      if(s>>i & 1){
        t ^= a[i];
      }
    }
    if( t==p ){
      ans++;
    }
  }

  cout << ans << endl;
}
