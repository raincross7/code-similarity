#include <bits/stdc++.h>
using namespace std;

# define REP(i,n) for (int i=0;i<(n);++i)
# define rep(i,a,b) for(int i=a;i<(b);++i)
# define p(s) std::cout << s ;
# define pl(s)  std::cout << s << endl;
# define printIf(j,s1,s2) cout << (j ? s1 : s2) << endl;
# define YES(j) cout << (j ? "YES" : "NO") << endl;
# define Yes(j) std::cout << (j ? "Yes" : "No") << endl;
# define yes(j) std::cout << (j ? "yes" : "no") << endl;
# define all(v) v.begin(),v.end()
# define showVector(v) REP(i,v.size()){p(v[i]);p(" ")} pl("")
template<class T> inline bool chmin(T &a, T b){ if(a > b) { a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b){ if(a < b) { a = b; return true;} return false;}
typedef long long int ll;
typedef pair<ll,ll> P_ii;
typedef pair<double,double> P_dd;

template<class T>
vector<T> make_vec(size_t a){
    return vector<T>(a);
}

template<class T, class... Ts>
auto make_vec(size_t a, Ts... ts){
  return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));
}

template<typename T,typename V>
typename enable_if<is_class<T>::value==0>::type
fill_v(T &t,const V &v){t=v;}

template<typename T,typename V>
typename enable_if<is_class<T>::value!=0>::type
fill_v(T &t,const V &v){
  for(auto &e:t) fill_v(e,v);
}


const int MOD = 1000000007;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;

void addM(long long &a, long long b) {
    a += b;
    if (a >= MOD) a -= MOD;
}

void mulM(long long &a, long long b) {
    a = ((a%MOD)*(b%MOD))%MOD ;
}

// テーブルを作る前処理
const int MAX = 510000;
long long fac[MAX], finv[MAX], inv[MAX];
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
long long COM(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}



int main() {
    ll N;
    cin >> N;

    string s;
    cin >> s;

    int x1[] = {0,0,1,1}, x2[] = {0,1,0,1};

    REP(i, 4) {
        vector<int> ans(N); // 0:S, 1:W
        ans[0] = x1[i];
        ans[1] = x2[i];

        for (int i = 1; i <= N - 2; i++){
            if (s[i] == 'o') {
                ans[i + 1] = (ans[i] == 0 ? ans[i-1] : 1 - ans[i-1]);
            } else {
                ans[i + 1] = (ans[i] == 0 ? 1 - ans[i-1] : ans[i-1]);
            }
        }

        // N番目と1番目の主張が矛盾していなければOK
        bool c1 = (s[0] == 'o' && ((ans[0] == 0 && ans[N-1] == ans[1]) || (ans[0] == 1 && ans[N-1] != ans[1])))
               || (s[0] != 'o' && ((ans[0] == 1 && ans[N-1] == ans[1]) || (ans[0] == 0 && ans[N-1] != ans[1])));
        bool c2 = (s[N-1] == 'o' && ((ans[N-1] == 0 && ans[N-2] == ans[0]) || (ans[N-1] == 1 && ans[N-2] != ans[0])))
               || (s[N-1] != 'o' && ((ans[N-1] == 1 && ans[N-2] == ans[0]) || (ans[N-1] == 0 && ans[N-2] != ans[0])));
        if(c1 && c2) {
            REP(i, N) cout << (ans[i] == 0 ? 'S' : 'W');
            cout << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
