#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin >> a >> b;
    
    if ( a * b % 2 == 1) {
        cout << "Odd" << endl;
    }
    
    else {
        cout << "Even" << endl;
    }
}
