#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b;
  cin >> a >> b;
  int count = 0;
  for(int i=0;i<=a;i++){
   for(int j=0;j<=a;j++){
    if (i+j>b) break;
    if(i+j+a>=b){
      count++;
    }
    }
  }
  cout << count << endl;
}
