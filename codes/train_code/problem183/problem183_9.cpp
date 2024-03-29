#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

const int MAX = 1000010;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}


int main() {
    COMinit();
    long long X, Y; cin >> X >> Y;

    if ((X + Y) % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    // i => (2, 1), j => (1, 2)
    long long sum = 0;
    for (int i = 0; i <= X / 2; i++) {
        int j = X - i * 2;
        if (j * 2 + i == Y) sum += COM(i + j, i);
    }

    cout << sum << endl;
}

