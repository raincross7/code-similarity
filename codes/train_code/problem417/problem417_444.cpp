#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <queue>
#include <cmath>
using namespace std;

int main() { 
    string s;
    cin >> s;
    int n = s.size();
    if (s == string(n, 'W') || s == string(n, 'B')) {
        cout << 0 << endl;
        return 0;
    }
    int index = 0;
    int res = 0;
    int flag = 0;
    while (index < n && s[index] == 'B') {
        s[index] = 'W';
        index++;
        flag = 1;
    }
    if (index == n) {
        cout << 2 << endl;
        return 0;
    }
    res += flag;
    flag = 0;
    index = n -1;
    while (index >= 0 && s[index] == 'B') {
        s[index] = 'W';
        index--;
        flag = 1;
    }
    res += flag;
    
    for (int i = 1; i < n; i++) {
        if (s[i] == 'B' && s[i - 1] == 'W') {
            res += 2;
        }
    }
    cout << res << endl;
}


