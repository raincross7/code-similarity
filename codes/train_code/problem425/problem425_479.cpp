#include<iostream>
using namespace std;

void printRect( int h, int w ) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << '#';
        }
        cout << endl;
    }
}

  
int main() {
    int h, w;
    while (1) {
        cin >> h >> w;
        if (h == 0 && w == 0) return 0;
        printRect( h, w);
        cout << endl;
    }
}