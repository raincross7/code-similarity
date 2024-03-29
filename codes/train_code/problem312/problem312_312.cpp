#include <bits/stdc++.h>
using namespace std;
using ll=long long;
/*

4 4
3 4 5 6
3 4 5 6

  1 2 3 4
1 1 0 0 0
2 0 2 0 0
3 0 0 4 0
4 0 0 0 8
一致したら1手前の総和+1みたいなかんじ

4
1 2 3 4
1 2 2 2

  1 2 3 4
1 1 0 0 0
2 0 2 0 0
3 0 2 0 0
4 0 2 0 0 7+1=8通り？
一致してなかったら増えるの0通り、で

4
1 1 3 4
1 2 1 2

N*M*2でいけるかな
  1 2 3 4
1 1 0 1 0
2 1 0 2 0
3 0 0 0 0
4 0 0 0 0 5+1=6通り
3-2で一致していたら2-1の総和に+1する、という発想

total出すのが時間かかるのか
常に総和としてデータをおさえておきたい
  1 2 3 4
1 1 0 1 0
2 1 0 2 0
3 0 0 0 0
4 0 0 0 0

別配列作るのか
SUM
  1 2 3 4
1 1 1 2 2
2 2 2 5 5
3 2 2 5 5
4 2 2 5 5 5+1=6

4
1 1 3 4
1 2 1 2

まず外うめ？
  1 2 3 4
1 1 1 2 2
2 2 
3 2 
4 2 

  1 2 3 4
1 1 1 2 2
2 2 2 4 
3 2 
4 2 

二次元累積和が理解できてないのかな
  1 2 3 4
1 1 1 1 1
2 1 1 1 1
3 1 1 1 1
4 1 1 1 1

  1 2 3 4
1 1 2 3 4
2 2 4 6 8
3 3
4 4

外うめだけ必要？
*/

int main(){
  ll N,M,MOD=1e9+7; cin>>N>>M;
  vector<ll> S(N+1,0), T(M+1,0);
  vector<vector<ll>> DP(N+1,vector<ll>(M+1,0)), sum(N+1,vector<ll>(M+1,0));
  for(ll i=1; i<=N; i++) cin>>S[i];
  for(ll i=1; i<=M; i++) cin>>T[i];
  for(ll i=1; i<=N; i++) for(ll j=1; j<=M; j++){
    if(S[i]==T[j]) (DP[i][j]=sum[i-1][j-1]+1)%=MOD;
    (sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+DP[i][j])%=MOD;
  }
  cout<<(sum[N][M]+1+MOD)%MOD<<endl;
}