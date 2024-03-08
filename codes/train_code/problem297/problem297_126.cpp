#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <math.h>
#include <string>
#include <numeric>
#include <algorithm>
#include <utility>


using std::cout;
using std::cin;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


ll gcd(ll a, ll b) {
    while (b != 0) {
        auto tmp = a;
        a = b;
        b = tmp % a;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

int isPrime(int a) {
    for (int i = 2; i * i <= a; ++i) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}





void oneCase () {
    string a, b, c;
    cin >> a >> b >> c;
    if (a.back() == b.front() && b.back() == c.front()) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}





int main() {
    int t = 1;
//    cin >> t;
    while (t > 0) {
        oneCase();
        --t;
    }

    return 0;
}