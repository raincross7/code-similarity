#include <bits/stdc++.h>
using namespace std;
using ll=long long;
/*
また論理積とか
1,1で終わる bit和とか
和積排bit
1 1 0 2   1,1=B
2 0 2 3   1,2= 1,1= A
1 1 0 4   2,2= 0,3= 1,1= B
2 1 1 5   2,3= 3,1= 2,1= 1,1= A
2 1 1 3   1,3= 1,2= 1,1= B
2 0 2 2   1,4= 1,3= 1,2= 1,1= A

ああ、ルールちがうな･･･
1 1 0 2   1,1=B
2 0 2 3   1,2= 2,0= 1,1= B
1 1 0 4   2,2= 0,3= 1,1= B
2 1 1 5   2,3= 0,4= 1,2= 2,0= 1,1=B
2 1 1 5   2,3= 0,4= 2,0= 0,1= Axx
2 1 1 5   2,3= 3,1= 1,2= 2,0= 1,1=B
2 0 2 2   1,4= 2,2= A
2 0 2 2   1,4= 3,0= 1,1=Bxx

|X-Y|<=1を受けたほうがまけ。
だけど0,0 0,1 1,0 1,1だったらB
*/
int main(){
  ll X,Y; cin>>X>>Y;
  if(X+Y<=1 || abs(X-Y)<=1){
    cout<<"Brown"<<endl;
    return 0;
  }
  cout<<"Alice"<<endl;
}