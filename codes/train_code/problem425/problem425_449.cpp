#include <iostream>
#include <string>
using namespace std;

int main() {
    int H, W;
    while (cin >> H >> W, H | W) {
        string s(W, '#');
        for (int i = 0; i < H; i++) {
            cout << s << endl;
        }
        cout << endl;
    }
    return 0;
}