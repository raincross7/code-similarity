/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author Kishan Sairam Adapa
 */

#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

#define ll long long int
#define MOD ((int)(1e9) + 7)

using namespace std;

class BNiceShopping {
public:
    void solve(istream& cin, ostream& cout) {
        int a, b, m;
        cin >> a >> b >> m;
        int minA = INT_MAX, minB = INT_MAX;
        vector<int> sa, sb;
        for(int i=0; i<a; i++) {
            int tp;
            cin >> tp;
            minA = min(minA, tp);
            sa.push_back(tp);
        }
        for(int i=0; i<b; i++) {
            int tp;
            cin >> tp;
            minB = min(minB, tp);
            sb.push_back(tp);
        }
        int mincost = minA+minB;
        for(int i=0; i<m; i++) {
            int x, y, c;
            cin >> x >> y >> c;
            mincost = min(mincost, sa[x-1] + sb[y-1] - c);
        }
        cout << mincost << '\n';
    }
};


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    BNiceShopping solver;
    std::istream& in(std::cin);
    std::ostream& out(std::cout);
    solver.solve(in, out);
    return 0;
}
