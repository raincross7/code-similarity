    #include <map>
    #include <set>
    #include <list>
    #include <cmath>
    #include <deque>
    #include <queue>
    #include <stack>
    #include <cstdio>
    #include <string>
    #include <vector>
    #include <complex>
    #include <cstdlib>
    #include <cstring>
    #include <iomanip>
    #include <numeric>
    #include <utility>
    #include <iostream>
    #include <algorithm>
    #include <functional>
    #include <unordered_map>
    #include <unordered_set>
     
    using namespace std;
     
    #define INF (1 << 30)
    #define INFL (1LL << 62)
    #define MOD7 1000000007
    #define MOD9 1000000009
    #define EPS 1e-10
     
    #define ll long long
    #define ull unsigned long long
    #define P pair<int, int>
    #define pii pair<int, int>
    #define pll pair<ll, ll>
    #define pul pair<ull, ull>
    #define all(a) (a).begin(), (a).end()
    #define FOR(i,a,b) for (int i=(a);i<(b);++i)
    #define RFOR(i,a,b) for (int i=(b)-1;i>=(a);--i)
    #define REP(i,n) for (int i=0;i<(n);++i)
    #define RREP(i,n) for (int i=(n)-1;i>=0;--i)
     
    void YES() { cout << "YES" << endl; }
    void NO() { cout << "NO" << endl; }
    void Yes() { cout << "Yes" << endl; }
    void No() { cout << "No" << endl; }
    void yes() { cout << "yes" << endl; }
    void no() { cout << "no" << endl; }
    void digit(int d) { cout << fixed << setprecision(d); }
    void ioup() { cin.tie(0); ios::sync_with_stdio(false); }
     
    int main() {
    	int h, w;
    	string s;
    	cin >> h >> w;
    	for (int i = 1; i <= h; ++i) {
    		for (int j = 1; j <= w; ++j) {
    			cin >> s;
    			if (s == "snuke") {
    				cout << (char)(j - 1 + 'A') << i << endl;
    				return 0;
    			}
    		}
    	}
     
    	return 0;
    }