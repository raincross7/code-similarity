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
    int N, M;
    cin >> N >> M;
    vector<vi> data(N + 1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        data[a].push_back(b);
        data[b].push_back(a);
    }
    vi dist(N + 1, -1);
    queue<int> que;
    dist[1] = 0;
    que.push(1);
    int count = 1;
    while(true) {
        queue<int> quet;
        while(!que.empty()) {
            int v = que.front();
            que.pop();
            for (int x : data[v]) {
                if (dist[x] != -1) {
                    continue;
                }
                dist[x] = count;
                quet.push(x);
            }
        }
        que = quet;
        count++;
        if (count > 2) {
            break;
        }
    }
    if (dist[N] == -1) {
        cout << "IMPOSSIBLE" << endl;
    }
    else {
        cout << "POSSIBLE" << endl;
    }
}
