#include <bits/stdc++.h>
using namespace std;

int main() {
    int X,Y;
    cin >> X >> Y;
    for(int i=0;i<X+1;i++) {
        if(2*i+4*(X-i)==Y) {
            cout << "Yes" << endl;
            exit(0);
        }
    }
    cout << "No" << endl;
}