#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < (n); ++i)
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
using namespace std;
using ll = long long;
using P = pair<int,int>;
using Pl = pair<long long,long long>;
using veci = vector<int>;
using vecl = vector<long long>;
using vecveci = vector<vector<int>>;
using vecvecl = vector<vector<long long>>;
const int MOD = 1000000009;
const double pi = acos(-1);

int main() {
    int N; cin >> N;
    veci A(N); REP(i,N) cin >> A[i];
    vector<P> res;

    int i = 0;
    while(i < N) {
        int c = A[i];
        int cnt = 1;
        while(c == A[i+cnt] && i+cnt < N) cnt++;
        res.push_back(P(c,cnt));
        i += cnt;
    }

    int ans = 0;
    for(auto p : res) ans += p.second/2;
    cout << ans << endl;
}