#include <iostream>
using namespace std;
 int main(){
 string S;
 cin >> S;
 int L = S.size();
 string ans = "AC";
 if(S[0] != 'A'){
 ans = "WA";
 }
 int cnt = 0;
 for(int i = 1; i < L; ++i){
 if(isupper(S[i])){
 if(i == 1 || i == L - 1 || S[i] != 'C'){
 ans = "WA";
 }
 ++cnt;
 }
 }
 if(cnt != 1){
 ans = "WA";
 }
 cout << ans << endl;
 return 0;
 }