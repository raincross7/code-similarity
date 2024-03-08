#include <bits/stdc++.h>
using namespace std;

struct Benri { Benri() { std::cin.tie(0); ios::sync_with_stdio(false); cout << fixed << setprecision(12);}} benri;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using vll = vector<long long>;
using pll = pair<ll, ll>;
using ull = unsigned long long;

template <typename T> using PQ = priority_queue<T>;
template <typename T> using minPQ = priority_queue<T, vector<T>, greater<T>>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define F first
#define S second

template<class T>bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }

constexpr long long MOD = 1000000007;
//constexpr long long MOD = 998244353;
//constexpr int INF = 1001001001;
constexpr ll INF = 1001001001001001001ll;
constexpr double EPS = 1e-10;
using number = long long;


int main() {
    ll N, K; cin >> N >> K;
    PQ<pll> pq;
    minPQ<pll> mpq;
    map<ll, ll> has;
    rep(i, N) {
        ll t, d; cin >> t >> d;
        pq.push(mp(d, t));
    }

    ll Sum = 0;

    rep(i, K) {
        pll val = pq.top(); pq.pop();
        ll t, d; tie(d, t) = val;
        Sum += d;
        has[t]++;
        if (has[t] >= 2) mpq.push(mp(d, t)); //ダブるものをminPQに入れ交歓要因にする
    }

    ll x = has.size();
    ll ans = Sum + x * x;

    while (!pq.empty() && !mpq.empty()) {
        if (x == K) break;

        pll val = pq.top(); pq.pop(); //これから入れる候補
        ll t, d; tie(d, t) = val;
        if (has[t] >= 1) continue;
        has[t]++;

        pll mval = mpq.top(); mpq.pop(); //外れるもの
        ll mt, md; tie(md, mt) = mval;
        //has[mt]--;

        Sum += d - md;
        x++;
        /*cout << d << " " << md << endl;
        cout << Sum << " " << x << endl;*/
        chmax(ans, Sum + x * x);
    }

    cout << ans << endl;

}