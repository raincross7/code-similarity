#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    while(true){
        int H,W;
        cin >> H >> W;
        if(H == 0 && W == 0){
            break;
        }
        
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                cout << "#";
            }
            cout << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}