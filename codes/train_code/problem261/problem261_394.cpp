#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <cmath>
#include <iomanip>
#include <ctype.h>

using namespace std;
using ll = long long;
using PAIR = pair<int, int>;
using PAIRLL = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;

#define rep(i,N) for(int i=0;i<(int)N;++i)

ll GCD(ll x, ll y) {
    if (y == 0) return x;
    else return GCD(y, x % y);
}

bool my_compare(pair<string, int> a, pair<string, int> b) {
    if (a.first != b.first) {
        return a.first < b.first;
    }

    if (a.second != b.second) {
        return a.second > b.second;
    }
    else {
        return true;
    }
}

int main()
{
    int N;
    cin >> N;

    if (N <= 111) { cout << 111 << endl; }
    else if (N > 111 && N <= 222) { cout << 222 << endl; }
    else if (N > 222 && N <= 333) { cout << 333 << endl; }
    else if (N > 333 && N <= 444) { cout << 444 << endl; }
    else if (N > 444 && N <= 555) { cout << 555 << endl; }
    else if (N > 555 && N <= 666) { cout << 666 << endl; }
    else if (N > 666 && N <= 777) { cout << 777 << endl; }
    else if (N > 777 && N <= 888) { cout << 888 << endl; }
    else if (N > 888 && N <= 999) { cout << 999 << endl; }
}