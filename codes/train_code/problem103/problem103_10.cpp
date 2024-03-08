/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author Kishan Sairam Adapa
 */

#include <algorithm>
#include <array>
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

class BVaried {
public:
    void solve(istream& cin, ostream& cout) {
        string s;
        cin >> s;
        vector<int> cnt(26, 0);

        for(auto k : s) cnt[k - 'a']++;
        for(auto k: cnt) {
            if(k > 1) {
                cout << "no\n";
                return;
            }
        }
        cout << "yes\n";
    }
};


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    BVaried solver;
    std::istream& in(std::cin);
    std::ostream& out(std::cout);
    solver.solve(in, out);
    return 0;
}