#include <iostream>
using namespace std;
int main(void){
    int m,f,r;
    
    while(1){
        cin >> m >> f >> r;
        
        if(m == -1 && f == -1 && r == -1){
            break;
        }
        else if(m == -1 || f == -1){
            cout << "F";
        }
        else if(m + f >= 80){
            cout << "A";
        }
        else if(m + f >= 65 && m + f <= 80){
            cout << "B";
        }
        else if(m + f >= 50 && m + f <= 65){
            cout << "C";
        }
        else if(m + f >= 30 && m + f <= 50 && r >= 50){
            cout << "C";
        }
        else if(m + f >= 30 && m + f <= 50){
            cout << "D";
        }
        else{
            cout << "F";
        }
        cout << endl;
    }
    
}
