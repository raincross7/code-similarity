#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
#define rep(i,n) for(int i = 0; i < ((int)(n)); i++)   // 0-indexed昇順

int main() {
    int N;
    cin >> N;
    if (N < 1200) {
        cout << "ABC";
    } else if (N < 2800) {
        cout << "ARC";
    } else {
        cout << "AGC";
    }
    cout << endl;
}
