#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
#define rep(i, a, n) for(int i = a; i < n; i++)
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  int c = a * 500;
  if(c >= b){
    cout << "Yes\n";
  }
  else{
    cout << "No\n";
  }
}
  
  
  