#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
    char c;
    cin >> c;
    if (c == 'a' || c == 'i' || c == 'u' || c =='e' || c =='o')cout << "vowel" << endl;
    else cout << "consonant" << endl;
}   