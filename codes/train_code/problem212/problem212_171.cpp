#include<iostream>
using namespace std;

int main() {
  int N,i,j,count,sum=0;
  
  cin >> N;
  
  for(i=1;i<=N;i+=2) {
    count = 0;
    for(j=1;j<=N;j++) {
      if(i%j==0) count++;
    }
    if(count==8) sum++;
  }
  
  cout << sum << endl;

  return 0;
}