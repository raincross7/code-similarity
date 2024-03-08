#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <math.h> // sqrt
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <iomanip> // setprecision
using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vb = vector<bool>;
using vll = vector<long long>;
using pii = pair<int, int>;
using psi = pair<string, int>;

int main() {
    int N;
    cin >> N;
    vector<string> data(N, " ");
    unordered_map<string, ll> um(N);
    string s;
    ll ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> s;
        sort(s.begin(), s.end());
        data.at(i) = s;
    }
    for (int i = 0; i < N; i++) {
        um[data.at(i)] += 1;
        ans += um[data.at(i)] - 1;
    }
    cout << ans << endl;
}