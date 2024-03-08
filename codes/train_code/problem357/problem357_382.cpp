#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll (i) = 0; (i) < (n); (i)++)
#define prl(x) cout << (x) << endl

template <typename A, typename B>
string to_string(pair<A, B> p);
template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p);
template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p);
string to_string(const string& s) {return '"' + s + '"';}
string to_string(char c){return string(1, c);}
string to_string(const char* s) {return to_string((string) s);}
string to_string(bool b){return (b ? "true" : "false");}
template <typename A, typename B>
string to_string(pair<A, B> p){return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";}
template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p){return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";}
template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p){return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")";}
string to_string(vector<bool> v) {
  bool first = true;
  string res = "{";
  for (int i = 0; i < static_cast<int>(v.size()); i++) {
    if (!first) res += ", ";
    first = false;
    res += to_string(v[i]);
  }
  res += "}";
  return res;
}

template <size_t N>
string to_string(bitset<N> v) {
  string res = "";
  for (size_t i = 0; i < N; i++) res += static_cast<char>('0' + v[i]);
  return res;
}

template <typename A>
string to_string(A v) {
    bool first = true;
    string res = "{";
    for (const auto &x : v) {
        if (!first) {
            res += ", ";
        }
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

template<typename T>
string to_string(priority_queue<T>& q){
    priority_queue<T> copy;
    bool first = true;
    string res = "{";
    while(!q.empty()){
        if (!first) {
            res += ", ";
        }
        first = false;
        res += to_string(q.top());
        copy.push(q.top());
        q.pop();
    }

    swap(q, copy);
    res += "}";
    return res;
}

void debug_out() {cerr << endl;}

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T){
    cerr << " " << to_string(H);
    debug_out(T...);
}

#ifdef _LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

int main(void){
    ll m; cin >> m;
    vector<ll> cs(m), ds(m);
    rep(i, m) cin >> ds[i] >> cs[i];
    
    ll answer = 0, cur = 0;
    rep(i, m){
        while (cs[i] >= 10){
            answer += (cs[i] / 10) * (9 + ds[i]);
            cs[i] = cs[i] / 10 + cs[i] % 10;
        }
        rep(j, cs[i]){
            cur += ds[i], answer++;
            if (cur >= 10) (cur += 1) %= 10, answer++;
        }
    }

    prl(answer - 1);

    return 0;
}
