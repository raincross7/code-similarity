#include <iostream>
#include<array>
using namespace std;

int main() {
    // Input
    int n, k, sum = 0;
    cin >> n >> k;
    int p[n];
    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }

    // Bubble sort
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-1; j++) {
            if (p[j] > p[j+1]) {
                swap(p[j], p[j+1]);
            }
        }
    }

    // Output
    for(int i = 0; i < k; i++) {
        sum += p[i];
    }

    cout << sum << endl;
}