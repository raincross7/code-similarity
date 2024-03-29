#include <algorithm>
#include <cassert>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

#include <limits.h>

using namespace std;

typedef long long ll;

template<class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

vector<int> as;
vector<ll> ss;

ll solve(const int N, const int M) {
    map<int, ll> m;

    ll ans = 0;

    for (int i = 0; i <= N; i++) {
        int x = ss[i] % M;
        ans += m[x];
        m[x]++;
    }

    return ans;
}

int main(void) {
    int N, M;
    cin >> N >> M;

    as.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> as[i];
    }

    ss.resize(N + 1, 0);
    for (int i = 0; i < N; i++) {
        ss[i + 1] = ss[i] + as[i];
    }

    cout << solve(N, M) << endl;

    return 0;
}
