#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    while(1){
        int h,w;
        cin >> h >> w;
        if(h==0) break;
        
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}