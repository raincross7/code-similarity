#include <bits/stdc++.h>
#define rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for (int i = (int)(a) ; i < (int)(b) ; i++)


#define SZ(x) ((int)(x).size())


typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
struct Vec{
    double x, y;
};

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
T min(T a, T b)
{
    if (a < b) return a;
    return b;
}

template<class T>
T max(T a, T b)
{
    if (a > b) return a;
    return b;
}

using namespace std;

int main()
{
    // cin.tie(nullptr);
    // ios_base::sync_with_stdio(false);
    // cout << fixed << setprecision(15);
    int N,miX = 1000000;
    cin >> N;
    vector<int> X(N);
    rep(i, N) {
        cin >> X[i]; 
    }
    
    ll res;
    rep(i, 101){
        res = 0;
        rep(k, N) {
            res += (X[k] - i) * (X[k] - i);
        }
        if (res < miX) {
            miX = res;
        }
    }
    cout << miX << endl;
    return 0;
}

