#include <bits/stdc++.h>
using namespace std;
#define all(n) begin(n), end(n)
const long long INF = numeric_limits<long long>::max();
typedef long long ll;
typedef vector<int> vint;
typedef vector<vector<int>> vvint;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef unsigned long long ull;
template <class T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b)
{
    if (b < a)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <typename T>
vector<T> make_v(size_t a) { return vector<T>(a); }

template <typename T, typename... Ts>
auto make_v(size_t a, Ts... ts)
{
    return vector<decltype(make_v<T>(ts...))>(a, make_v<T>(ts...));
}
template <typename T, typename V>
typename enable_if<is_class<T>::value == 0>::type
fill_v(T &t, const V &v) { t = v; }

template <typename T, typename V>
typename enable_if<is_class<T>::value != 0>::type
fill_v(T &t, const V &v)
{
    for (auto &e : t)
        fill_v(e, v);
}
int main()
{
    ll N,M;
    cin>>N>>M;
    vll A(N),acc(N);
    for (size_t i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    partial_sum(all(A),acc.begin());
    map<ll,ll> cnt;
    for (auto &&i : acc)
    {
        cnt[i%M]++;
    }
    ll ans=0;
    for (auto &&i : cnt)
    {
        if(i.first == 0)
        ans += i.second + i.second*(i.second-1)/2;
        else
        ans += i.second*(i.second-1)/2;
    }
    cout<<ans;
    return 0;
}