#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
#define pi 3.14159265358979323846
#define ll long long
#define rep(i, a, n) for(int i = a; i < n; i++)
using namespace std;
int main(){
  int n, r;
  cin >> n >> r;
  if(n >= 10){
    cout << r << "\n";
    return 0;
  }
  cout << r + 100 * (10 - n) << "\n";
}
  
  
  
  
  
  
  
  