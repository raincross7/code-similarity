#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  if(n%10 == n/10%10 && n/10%10 == n/100%10 || n/10%10 == n/100%10 && n/100%10 == n/1000){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}