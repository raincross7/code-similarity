#include <bits/stdc++.h>
using namespace std;

int main(void){
    
   int A,B,K;
   cin >> K >> A >> B;
   
   for(int i=A;i<=B;i++){
       if(i % K == 0){
           cout << "OK" <<endl;
           break;
       }
       if(i == B) cout << "NG" <<endl;
   }
}