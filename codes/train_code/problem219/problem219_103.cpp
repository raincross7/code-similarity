#include <bits/stdc++.h>
using namespace std;
int main() {  
  int N , A , B , C , D , E , F , G , H , J , K , L ;
  cin >> N ;

  A = N / 100000000 ;
  B = ( N - A * 100000000  ) / 10000000 ;
  C = ( N - A * 100000000 - B * 10000000 ) / 1000000 ;
  D = ( N - A * 100000000 - B * 10000000 - C * 1000000 ) / 100000 ;
  E = ( N - A * 100000000 - B * 10000000 - C * 1000000 - D * 100000 ) / 10000 ;
  F = ( N - A * 100000000 - B * 10000000 - C * 1000000 - D * 100000 - E * 10000 ) / 1000 ;
  G = ( N - A * 100000000 - B * 10000000 - C * 1000000 - D * 100000 - E * 10000 - F * 1000 ) / 100 ;
  H = ( N - A * 100000000 - B * 10000000 - C * 1000000 - D * 100000 - E * 10000 - F * 1000 - G * 100) / 10 ;
  J = N - A * 100000000 - B * 10000000 - C * 1000000 - D * 100000 - E * 10000 - F * 1000 - G * 100 - H * 10 ;
  K = A + B + C + D + E + F + G + H + J ;


    if ( N % K == 0 ){
      cout << "Yes" << endl;
    }   
    else {
      cout << "No" << endl;
    }  
}