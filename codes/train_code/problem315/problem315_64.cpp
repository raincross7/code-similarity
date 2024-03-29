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

class BStringRotation {
public:
    void solve(istream& cin, ostream& cout) {
        string s, t;
        cin >> s >> t;
        int n = s.length();
        for(int i=0; i<n; i++) {
            if(t.compare(s) == 0) {cout << "Yes" << '\n'; return;}
            string x = " ";
            x += s;
            x[0] = s[s.length()-1];
            s = x.substr(0, n);
        }
        cout << "No" << '\n';
    }
};


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    BStringRotation solver;
    std::istream& in(std::cin);
    std::ostream& out(std::cout);
    solver.solve(in, out);
    return 0;
}
