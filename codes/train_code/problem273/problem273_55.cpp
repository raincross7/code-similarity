/**
 * Created by hiramekun at 22:11 on 2020-06-06.
 */
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vl = vector<ll>;
using vvl = vector<vl>;
using vb = vector<bool>;
using P = pair<ll, ll>;
template<typename T> using pq = priority_queue<T>;
template<typename T> using minpq = priority_queue<T, vector<T>, greater<T>>;
template<typename T, typename K> using ump = unordered_map<T, K>;
const ll dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
const ll mod = 1000000007;
const ll inf = ll(1e9);
const ll e5 = ll(1e5);
const ll ll_inf = ll(1e9) * ll(1e9);

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define repr(i, n) for(ll i = ll(n - 1); i >= 0; i--)
#define each(i, mp) for(auto& i:mp)
#define eb emplace_back
#define F first
#define S second
#define all(obj) (obj).begin(), (obj).end()

template<class T>
ostream &operator<<(ostream &out, const vector<T> &list) {
    ll n = list.size();
    rep(i, n) out << list[i] << ' ';
    return out;
}

template<class T>
istream &operator>>(istream &in, vector<T> &list) {
    ll n = list.size();
    rep(i, n) in >> list[i];
    return in;
}

template<class T>
ostream &operator<<(ostream &out, const vector<vector<T>> &list) {
    ll n = list.size();
    rep(i, n) out << list[i] << '\n';
    return out;
}

/* ------------- ANSWER ------------- */
/* ---------------------------------- */
// sample: http://beet-aizu.hatenablog.com/entry/2017/12/01/225955
// verified with
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_F
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_G
template<typename Data, typename Lazy>
struct SegmentTree {
public:
    bool isLazy = false;
    int sz;
    vector<Data> seg;
    vector<Lazy> lazy;

    // mergeするときの操作
    using MergeData = function<Data(Data, Data)>;
    // lazyをxでupdate
    using UpdateLazyFromX = function<Lazy(Lazy, Lazy)>;
    // dataをlazyでupdate
    using UpdateDataFromLazy = function<Data(Data, Lazy)>;
    // lenが与えられた時にlazyを計算
    using CalcLazyWithLen = function<Lazy(Lazy, ll)>;

    // lazy
    // O(N)
    SegmentTree(int n, const MergeData fm, const UpdateLazyFromX fl, const UpdateDataFromLazy fa,
                const CalcLazyWithLen fw, Data M1, Lazy A1)
            : fm(fm), fl(fl), fa(fa), fw(fw), M1(M1), A1(A1) {
        isLazy = true;
        sz = 1;
        while (sz < n) sz *= 2;
        seg.assign(2 * sz - 1, M1);
        lazy.assign(2 * sz - 1, A1);
    }

    // not lazy
    SegmentTree(int n, const MergeData fm, Data M1) :
            fm(fm), M1(M1),
            // ここからdummy
            fl([M1](Data a, Data b) { return M1; }),
            fa([M1](Data a, Lazy b) { return M1; }),
            fw([M1](Lazy a, ll b) { return M1; }),
            A1(M1) {
        isLazy = false;
        sz = 1;
        while (sz < n) sz *= 2;
        seg.assign(2 * sz - 1, M1);
    }

    // not lazy
    // O(logN)
    Data update(int i, Data x) {
        i += sz - 1;
        seg[i] = x;
        while (i > 0) {
            i = (i - 1) / 2;
            seg[i] = fm(seg[2 * i + 1], seg[2 * i + 2]);
        }
    }

    void build(const vector<Data> &v) {
        ll n = v.size();
        rep(i, n) seg[i + sz - 1] = v[i];
        for (ll i = sz - 2; i >= 0; --i) {
            seg[i] = fm(seg[i * 2 + 1], seg[i * 2 + 2]);
        }
    }

    // for lazy only
    // O(logN)
    Data update(int a, int b, Data x) {
        return update(a, b, x, 0, 0, sz);
    }

    // O(logN)
    Data query(int a, int b) {
        return query(a, b, 0, 0, sz);
    }

private:
    const MergeData fm;
    const UpdateLazyFromX fl;
    const UpdateDataFromLazy fa;
    const CalcLazyWithLen fw;
    const Data M1;
    const Lazy A1;

    void eval(int len, int k) {
        if (lazy[k] == A1) return;
        if (k * 2 + 1 < sz * 2 - 1) {
            lazy[2 * k + 1] = fl(lazy[2 * k + 1], lazy[k]);
            lazy[2 * k + 2] = fl(lazy[2 * k + 2], lazy[k]);
        }
        seg[k] = fa(seg[k], fw(lazy[k], len));
        lazy[k] = A1;
    }

    Data update(int a, int b, Data x, int k, int l, int r) {
        eval(r - l, k);
        if (r <= a || b <= l) return seg[k];
        if (a <= l && r <= b) {
            lazy[k] = fl(lazy[k], x);
            return fa(seg[k], fw(lazy[k], r - l));
        }
        return seg[k] = fm(update(a, b, x, k * 2 + 1, l, (l + r) / 2),
                           update(a, b, x, k * 2 + 2, (l + r) / 2, r));
    }

    Data query(int a, int b, int k, int l, int r) {
        if (isLazy) eval(r - l, k);
        if (r <= a || b <= l) return M1;
        if (a <= l && r <= b) return seg[k];
        Data vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
        Data vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
        return fm(vl, vr);
    }
};

SegmentTree<ll, ll> RangeMinimumTree(int n) {
    auto fm = [](ll a, ll b) { return min(a, b); };
    auto fl = [](ll a, ll b) { return b; };
    auto fa = [](ll a, ll b) { return b; };
    auto fw = [](ll a, ll w) { return a; };
    SegmentTree<ll, ll> tree(n, fm, fl, fa, fw, LONG_MAX, LONG_MAX);
    return tree;
}

SegmentTree<ll, ll> RangeMaxTree(int n) {
    auto fm = [](ll a, ll b) { return max(a, b); };
    auto fl = [](ll a, ll b) { return b; };
    auto fa = [](ll a, ll b) { return b; };
    auto fw = [](ll a, ll w) { return a; };
    SegmentTree<ll, ll> tree(n, fm, fl, fa, fw, LONG_MIN, LONG_MIN);
    return tree;
}

SegmentTree<ll, ll> RangeSumTree(int n) {
    auto fm = [](ll a, ll b) { return a + b; };
    auto fl = [](ll a, ll b) { return a + b; };
    auto fa = [](ll a, ll b) { return a + b; };
    auto fw = [](ll a, ll w) { return a * w; };
    SegmentTree<ll, ll> tree(n, fm, fl, fa, fw, 0, 0);
    return tree;
}


void solve() {
    ll n, d, a;
    cin >> n >> d >> a;

    vector<P> xh;
    rep(i, n) {
        ll x, h;
        cin >> x >> h;
        xh.emplace_back(make_pair(x, h));
    }
    sort(all(xh));
    ll ans = 0;
    SegmentTree<ll, ll> tree = RangeSumTree(n + 100);
    rep(i, n) tree.update(i, i + 1, xh[i].second);
    rep(i, n) {
        ll cnt = tree.query(i, i + 1);
        if (cnt <= 0) continue;

        ll x = xh[i].first;
        ll need = (cnt + a - 1) / a;
        ll r = x + d * 2;
        ll idx = upper_bound(all(xh), make_pair(r, ll_inf)) - xh.begin();
        tree.update(i, idx, -need * a);
        ans += need;
    }
    cout << ans << '\n';
}

int main() {
#ifdef MY_DEBUG
    while (true) {
#endif
        solve();
#ifdef MY_DEBUG
    }
#endif
    return 0;
}