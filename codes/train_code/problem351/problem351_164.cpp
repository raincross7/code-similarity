#include <iostream>  
#include <string.h> 
using namespace std;
int main() {
    char x, y;
    cin >> x >> y;
    if (x > y)
        cout << ">";
    else if (x < y)
        cout << "<";
    else
        cout << "=";

    

    
    return 0;
}

