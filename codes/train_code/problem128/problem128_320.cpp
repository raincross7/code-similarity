#include <bits/stdc++.h>
//#define int long long

using namespace std;
using LL = long long;
using P = pair<int, int>;

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)

#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()

const int INF = (int)1e9;
const LL INFL = (LL)1e18;
const int MOD = (int)1e9 + 7;

/*
 * .#.#.#.#.#.#
 * ############
 *
 *
 *
 */

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;

    cout << "100 100" << endl;
    a--, b--;
    REP(i, 100) REP(j, 100){
        if(i < 50){
            if(i % 2 == 0 && j % 2 == 0 && a > 0){
                cout << '.';
                a--;
            }else{
                cout << '#';
            }
        }else{
            if(i % 2 == 1 && j % 2 == 0 && b > 0){
                cout << '#';
                b--;
            }else{
                cout << '.';
            }
        }
        if(j == 99) cout << endl;
    }

}