#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int count = 0;
    for (int i=1; i <= N; i++) {
        if (to_string(i).size() % 2 != 0) {
            count += 1;
        }
    }

    cout << count << endl;
    return 0;
}