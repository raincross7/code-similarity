#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const int INF = 1000000000;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    for (int k=0; k<=B+1; k++){
        if (A*k%B == C){
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;
}