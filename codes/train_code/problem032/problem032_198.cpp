#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int (i)=0;(i)<(n);++(i))
#define FOR(i,a,b) for(int (i)=(a);(i)<(b);++(i))
#define EACH(e,v) for(auto& e:v)
#define ALL(v) (v).begin(),(v).end()
#define SORT(v) sort(ALL(v))
#define RSORT(v) sort((v).rbegin(),(v).rend())
#define PERM(v) SORT(v);for(bool c##p=1;c##p;c##p=next_permutation(ALL(v)))
#define UNIQUE(v) SORT(v);(v).erase(unique(ALL(v)),(v).end())
template<typename A,typename B> inline bool chmax(A &a,const B &b){if(a<b){a=b;return 1;}return 0;}
template<typename A,typename B> inline bool chmin(A &a,const B &b){if(a>b){a=b;return 1;}return 0;}

const int MOD = (int)1e9 + 7;
const int INF = 1 << 30;
const ll INFF = 1LL << 62;

// 下にy, 右にx
enum {R, U, L, D};
const int dx[] = {1,  0, -1, 0};
const int dy[] = {0, -1,  0, 1};

int highest_bit(int num) {
    int ret = 0;
    while (num) {
        num >>= 1;
        ++ret;
    }
    return ret;
}

int N, K;
ll sum[32];

signed main() {

    cin >> N >> K;

    REP(i, N) {
        int A, B;
        cin >> A >> B;
        int h = highest_bit(A);
        if ((K | A) == K)
            sum[0] += B;
        FOR(j, 1, 32) {
            if (A & (1 << j)) continue;
            int k = K >> (j + 1);
            int a = A >> (j + 1);
            if ((k | a) == k) sum[j] += B;
        }
    }

    ll res = sum[0];
    REP(i, 32) if ((1 << i) & K) chmax(res, sum[i]);
    cout << res << endl;

}