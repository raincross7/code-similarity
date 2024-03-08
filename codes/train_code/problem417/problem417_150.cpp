#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <random>
#include <cstdio>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (int) n; i++)

int main() {
    string s;
    cin >> s;
    char c = s[0];
    int section = 1;
    rep(i,s.size()) {
        if (c != s[i]) {
            c = s[i];
            section++;
        }
    }
    cout << section-1 << endl;
    return 0;
}