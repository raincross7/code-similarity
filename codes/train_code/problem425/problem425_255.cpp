#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)return 0;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cout << '#';
            }
            cout << endl;
        }
        cout << endl;
    }
}
