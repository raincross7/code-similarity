#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int maxh = 0, cnt = 0;
    for (int i=0; i<n; i++) {
        int h;
        cin >> h;
        if (h >= maxh) {
            maxh = h;
            cnt++;
        }
    }
    cout << cnt << endl;
}