#include<iostream>
#include<string>
#include<fstream>
#define rep(i,start,n) for(int i=start;i<n;i++)             //??????????????????

using namespace std;

int main(){

while(1){

  int a=0,b=0;
  string number;         // number??¨???????????????????????°?????????
  cin >> number;


  if(number == "0") break;           //???????????¶

rep(i , 0 ,number.length()){              //?????????
  a += number[i]-'0';                      //???????????????????????°???????¶???????
}

cout << a << endl;                   //??¨???

}

return 0;

}