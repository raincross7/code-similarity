#include<iostream>
#include<vector>
using namespace std;
#define MAX 200000

int main() {
    int n;
    cin >> n;
    vector<int> a(MAX+10);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (n % 2 == 0) {
        for(int i = n - 1; i > 0; i -= 2) cout << a[i] << ' ';
        for(int i = 0; i < n; i += 2) cout << a[i] << ' ';
    } else {
        for(int i = n - 1; i >= 0; i -= 2) cout << a[i] << ' ';
        for(int i = 1; i < n; i += 2) cout << a[i] << ' ';
    }
    cout << endl;
}