#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N;
  cin>>N;
  int k = 0;//合計
  int j = 0;//桁数
  int a = 0;
  for(int n = 1;n <= N;n++){
    a = n;
    while (a != 0){
      a /= 10;
      j++;
   }
   if(j % 2 == 1){
     k++;
   }
   j = 0;
  }
  cout<<k<<endl;
}