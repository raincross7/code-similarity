#include <bits/stdc++.h>
using namespace std;
using ll=long long;
/*
DPかな
a+b=a^b
1100+11=1111とか
1000+1=1001
繰り上がりはない、0と1だけでなるもの
0 0
1 0
0 1
0 2
2 0
00
11 00
110 1
101 10
2n-1個かな
11=3だったら
 0  0
 0  1
 0 10
 0 11
 1  0
 1 10
10  0
10  1
11  0
1+4+4=9

100
  0   0

  0   1
  1   0

  0  10
 10   0

 10   1
  1  10
  0  11
 11   0

  0 100
100   0

  0 101
  1 100
101 0
100 1

  0 110
 10 100
100  10
110 0

  0 111
  1 110
 10 101
 11 100
100  11
101  10
110   1
111   0

増加量
0 1 2 3 4 5 6 7
1 2 2 4 2 4 4 8
1の数だけ2乗分加算


0000=1
0001=3
A=2,B=1
0010=5
0011=9
0100=11
0101=15
0110=19
0111=27
1000=29
1001=33
1010=37
1011=45
1100=49
1101=57
1110=65
1111=81

1がきたら3倍、は正しそう
0がきたら？
0001= 3
0010= 3+ 2=5
0100= 5+ 6=11
1000=11+18=29

0001=3
0011=9
0111=27
1111=81

0001=3
0010=5
0101=15
1010=15+22=37
*/
int main(){
  string S; cin>>S;
  ll Ssz=S.size(),MOD=1e9+7,A=2,B=1;
  for(ll i=1; i<Ssz; i++){
    if(S[i]=='1'){
      (B*=3)%=MOD;
      (B+=A)%=MOD;
      (A*=2)%=MOD;
    }
    else (B*=3)%=MOD;
  }
  ll ans=A+B;
  ans%=MOD;
  if(ans<0) ans+=MOD;
  cout<<ans<<endl;
}