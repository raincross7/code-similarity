#include <bits/stdc++.h>
using namespace std;

int main(void){
   
   unsigned long long int N,A,B;
   cin >> N >> A >> B;
   cout << (N/(A+B)) * A + min(A,(N%(A+B))) << endl;
}