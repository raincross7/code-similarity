#include<iostream>
using namespace std;
int main(){
  int i,j,k,H,W;
  while(true){
    cin >> H >> W;
    if(H==0 && W==0)break;
    for(i=1;i<=H;i++){
      if(i==1 || i==H){
        for(j=1;j<=W;j++){
          cout << "#";
        }
      }else{
        for(k=1;k<=W;k++){
          if(k==1 || k==W){
            cout << "#";
          }else{
            cout << ".";
          }
        }
      }
      cout << endl;
    }
  cout << endl;
  }
}