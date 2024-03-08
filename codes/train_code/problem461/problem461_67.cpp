#include <bits/stdc++.h>
using namespace std;
#define INCANT cin.tie(0), cout.tie(0), ios::sync_with_stdio(false), cout << fixed << setprecision(20);
#define int long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define _overload(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = (int)(a); i < (int)(b); i++)
#define rep(...) _overload(__VA_ARGS__, repi, _rep)(__VA_ARGS__)
#define _rev(i, n) revi(i, n, 0)
#define revi(i, a, b) for(int i = (int)(a - 1); i >= (int)(b); i--)
#define rev(...) _overload(__VA_ARGS__, revi, _rev)(__VA_ARGS__)
#define each(i, n) for(auto&& i: n)
void in(){}
template<typename F, typename... R>
bool in(F& f, R&... r){
    if(cin >> f){in(r...);return true;}
    else return false;
}
#define out(x) cout << (x)
#define space() cout << " "
#define indent() cout << '\n'
void print(){}
template<typename F, typename... R>
void print(F f, R... r){out(f), indent(), print(r...);}
#define debughead(x) cerr << "Line " << __LINE__ << ": " << #x << ": "
#define debugout(x) cerr << (x) << " "
#define debugindent() cerr << '\n'
#define debug(x) debughead(x), debugout(x), debugindent()
const int INF = 1e18, MOD = 1e9 + 7;
template<typename T>
bool chmax(T& a, T b){return (a = max(a, b)) == b;}
template<typename T>
bool chmin(T& a, T b){return (a = min(a, b)) == b;}

main(){
    INCANT;
    int n, res = -INF, mx = -INF;
    string s;
    in(n);
  	if(n == 2){
      in(n, res);
      out(n), space(), out(res);
      return 0;
    }
    int a[n];
    rep(i, n){
        in(a[i]);
        chmax(mx, a[i]);
    }
    rep(i, n){
        if(abs(mx / 2 - a[i]) < abs(mx / 2 - res)){
            res = a[i];
        }
    }
    out(mx), space(), out(res);
}
