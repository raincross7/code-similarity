#include <bits/stdc++.h>
using namespace std;

#define rp(i, k, n) for (int i = k; i < n; i++)
typedef long long ll;
typedef double ld;



template<class T>inline bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>inline bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const ll INF = 1ll << 60;
const ll MOD = 1e9 + 7ll;
const double PI=3.14159265358979323846;


int main(){
    int N;
    cin >> N;
    int count = 1;
    rp(i, 0, N) {
        int a;
        cin >> a;
        if(count == a) count ++;
    }
    if(count == 1) {
        cout << -1 << endl;
        return 0;
    }
    cout << N - count + 1 << endl;
    return 0;;
}
