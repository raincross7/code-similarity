#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a, int b) {  
  return b != 0 ? gcd(b, a % b) : a;
}//MAX
int lcm(int a, int b) { 
   return a * b / gcd(a, b);
   }
//MIN

 main() {
string s;
cin >> s;
for(int i=0;i<4;i++){
   cout << s.at(i);
}
cout <<" ";
for(int i=4;i<s.size();i++){
   cout << s.at(i);
}
cout << endl;
 }
