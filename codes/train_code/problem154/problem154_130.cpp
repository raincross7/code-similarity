#include <iostream>

using namespace std;


int main() {
    int a, b, c, count = 0;
    cin >> a >> b >> c;
    for (int i = a; i <= b; ++i) {
        count += !(c % i);
    }
    cout << count << endl;
    return 0;
}