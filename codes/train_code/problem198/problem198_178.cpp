#include <bits/stdc++.h>
#define REP(i,n) for (int i=0; i<(n); ++i)
#define REPR(i,n,m) for (int i=(n); i>=(m); --i)
using namespace std;
using LL = long long;
using LD = long double;
using PLL = pair<long long, long long>;
using PLD = pair<long double, long double>;
using VLL = vector<long long>;
using VLD = vector<long double>;
using VPLD = vector<PLD>;

const int INF = numeric_limits<int>::max();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string c, e; cin >> c >> e;

    if (c.size()>e.size()) {
        for (int i=0;i<c.size();i++)
        {
            if (i==c.size()-1) { cout << c[i]; }
            else { cout << c[i] << e[i]; }
        }
    } else {
        for (int i=0;i<c.size();i++)
        {
            cout << c[i] << e[i];
        }
    }
    
    cout << endl;

	return 0;
}
