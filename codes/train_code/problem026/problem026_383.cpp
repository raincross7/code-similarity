#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int A,B;
    cin >> A >> B;
    if (A==1) A+=13;
    if (B==1) B+=13;
    if (A==B)
        cout << "Draw" << endl;
    else if (A>B)
        cout << "Alice" << endl;
    else 
        cout << "Bob" << endl;
        
}