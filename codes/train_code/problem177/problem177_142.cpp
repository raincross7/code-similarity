#include <bits/stdc++.h>
using namespace std;

int main() {
 string S;
 cin >> S;
 bool a = false;
 sort(S.begin(),S.end());
 if(S.at(0)==S.at(1)&&S.at(1)!=S.at(2)&&S.at(2)==S.at(3)){
   a=true;
 }
 if(a){
   cout << "Yes" << endl;
 }
   else{
     cout << "No" << endl;
   }
}