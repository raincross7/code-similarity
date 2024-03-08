#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define REP(i,num,n) for(int i=num, i##_len=(n); i<i##_len; ++i)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
#define print(x) (cout << (x) << endl)
#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
template<class T> inline void Yes(T condition){ if(condition) cout << "Yes" << endl; else cout << "No" << endl; }
#define fs first
#define sc second

const int INF = 1e9;
const ll LLINF = 1e16;
const ll MOD = 1e9+7;
template<class T> inline void add(T &a, T b){a = ((a+b) % MOD + MOD) % MOD;};

template<typename T>
vector<T> make_v(size_t a){return vector<T>(a);}
 
template<typename T,typename... Ts>
auto make_v(size_t a,Ts... ts){
  return vector<decltype(make_v<T>(ts...))>(a,make_v<T>(ts...));
}
 

// 指定した文字cが文字列に何文字入ってるか
ll stringcount(string s, char c) {
    return count(s.cbegin(), s.cend(), c);
}


// 割り算の切り上げ処理
template<typename T>
T rp(T a, T b) {
  return (a + b - 1) / b;
}

// 桁和
template<typename T>
T digsum(T n) {
    T res = 0;
    while(n > 0) {
        res += n%10;
        n /= 10;
    }
    return res;
}

// 回文判定
bool kai (string s) {
    string t{s};
    reverse(begin(t), end(t));
    return s == t;
}

using pint = pair<int, int>;
using pll = pair<ll, ll>;


int main(void)
{
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    auto cnt = make_v<int>(h, w);
    rep(i, h){
        vector<int> done(w);
        rep(j, w){
            if(s[i][j] == '#') continue;
            if(done[j]) continue;
            int l = 0;
            while(j + l < w){
                if(s[i][j + l] == '#') break;
                ++l;
            }
            rep(k, l){
                cnt[i][j+k] += l;
                done[j + k] = 1;
            }
        }
    }

    rep(i, w){
        vector<int> done(h);
        rep(j, h){
            if(s[j][i] == '#') continue;
            if(done[j]) continue;
            int l = 0;
            while(j + l < h){
                if(s[j + l][i] == '#') break;
                ++l;
            }
            rep(k, l){
                cnt[j + k][i] += l;
                done[j + k] = 1;
            }
        }
    }
    int ans = 0;
    rep(i, h) rep(j, w) chmax(ans, cnt[i][j] - 1);
    print(ans);


}
