#include <iostream>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    while(!(h == 0 && w == 0)){
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if((i == 0 || i == h - 1) || (j == 0 || j == w - 1)){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }
            cout << endl;
       }
       cin >> h >> w;
       cout << endl;
   }
   return 0;
}