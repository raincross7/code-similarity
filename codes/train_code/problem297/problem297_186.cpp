#include <iostream>

using namespace std;

int main (void) {
    string  a, b, c;

    cin >> a >> b >> c;

    if (a[a.length()-1] == b[0] && b[b.length() -1] == c[0]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}