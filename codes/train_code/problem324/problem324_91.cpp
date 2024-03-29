#include <bits/stdc++.h>
using namespace std;

/*  prime_factor(n)
    入力：整数 n
    出力：nの素因数分解
    計算量：O(√n)前後
    2^0が入ってしまうことに注意。
*/
template <typename T>
vector<pair<T, T>> prime_factor(T n) {
    vector<pair<T, T>> ret;
    for (T i = 2; i * i <= n; i++) {
        T tmp = 0;
        while (n % i == 0) {
            tmp++;
            n /= i;
        }
        ret.push_back(make_pair(i, tmp));
    }
    if (n != 1) ret.push_back(make_pair(n, 1));
    return ret;
}
int main() {
    long long N;
    cin >> N;
    long long ans = 0;
    vector<pair<long long, long long>>f = prime_factor(N);
    long long count,sum;
    for (auto next : f) {
        count = 0;
        sum = 0;
        while (sum + count < next.second) {
            count ++ ;
            sum += count;
        }
        ans += count;
    }
    cout << ans << endl;
}

