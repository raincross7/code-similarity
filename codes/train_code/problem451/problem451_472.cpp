#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int N; cin >> N;
    int K; cin >> K;
    int counter = 0;
    rep(i, N){
        int a; cin >> a;
        if(a >= K)counter++;
    }
    cout << counter << endl;

    return 0;
}