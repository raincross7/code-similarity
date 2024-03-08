#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define drep(i,n) for(int i = (n-1); i >= 0; i--)
#define all(v) (v).begin(),(v).end()
template <class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T &a, const T &b) { if (b < a) { a = b; return 1; } return 0; }
template <class T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template <class T> T lcm(T a, T b) { return a/gcd(a,b)*b; }
typedef pair<int, int> P;
typedef long long ll;
const int INF = 1001001001;
const ll LINF = 1001002003004005006ll;
const ll MOD = 1e9+7;

int main() {
    string s;
    ll k;
	cin >> s >> k;
    vector<int> chrs;
    int num = 1;
    rep(i,s.size()) {
        if(i) {
            if(s[i-1]==s[i]) {
                num++;
            } else {
                chrs.push_back(num);
                num = 1;
            }
        }
    }
    chrs.push_back(num);
    ll cnt = 0; // sの最初と最後の文字種を除いたs内の操作回数
    rep(i,int(chrs.size())-2) cnt += chrs[i+1] / 2;

    ll ans = 0;
    if (chrs.size() == 1) {     // 全結合
        ans = (k * s.size()) / 2;
    } else if (s.front() == s.back()) { // 結合あり
        ans = cnt * k + chrs.front()/2 + chrs.back()/2 + ((chrs.front()+chrs.back())/2)*(k-1);
    } else {                    // 結合なし
        ans = (cnt + chrs.front()/2 + chrs.back()/2) * k;
    }

	cout << ans << endl;
	return 0;
}
