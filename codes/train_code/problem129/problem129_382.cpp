/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author
 */


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <functional>
#include <cmath>
#include <numeric>
#include <iterator>
#include <fstream>

#define SIZE 100005
#define MOD 1000000007

using namespace std;

class ATwoIntegers {
public:
  static void solve(std::istream &cin, std::ostream &cout) {
    int64_t x, y;
    cin >> x >> y;
    if (x % y == 0)cout << -1 << endl;
    else cout << x << endl;
  }
};


int main() {
    ATwoIntegers solver;
    std::istream& in(std::cin);
    std::ostream& out(std::cout);
    solver.solve(in, out);
    return 0;
}