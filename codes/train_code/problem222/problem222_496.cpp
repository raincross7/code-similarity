#include<iostream>
using namespace std;

int main(){
  int n;
  int b,f,r,v;
  //??\?±??????°???????¬??????????
  int numbers[4][3][10] = {};

  cin >> n;

  //0???????????????????????????????????\?±??????°?????\???????????????
  for (int x = 1; x<=n; x++){
    cin >> b >> f >> r >> v;
    numbers[b-1][f-1][r-1] += v;
  }

  for (int i = 0; i<4; i++){
    for (int j = 0; j<3; j++){
      for (int k = 0; k<10; k++){
        cout << " " << numbers[i][j][k];
      }
      if (j != 2) {
        cout << endl;
      }
    }
    if (i != 3){
      cout << endl << "####################" << endl;
    }
    else cout << endl;
  }

  return 0;
}