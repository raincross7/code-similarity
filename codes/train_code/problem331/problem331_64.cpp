#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int N, M, X;
    vector<int> costs;
    vector<vector<int>> arr;
public:
    void load() {
        cin >> N >> M >> X;
        costs.assign(N, 0);
        arr.resize(N);
        for (int i = 0; i < N; ++i) {
            arr[i].resize(M);
            cin >> costs[i];
            for (int j = 0; j < M; ++j) {
                cin >> arr[i][j];
            }
        }
    }

    void helper(int cur, vector<int> sofar, int cost, int *output) {
        int min_val = numeric_limits<int>::max();
        for (int i = 0; i < M; ++i) {
            min_val = min(min_val, sofar[i]);
        }
        if (min_val >= X) {
            *output = min(*output, cost);
            return;
        }
        if (cur >= N) {
            return;
        }
        helper(cur + 1, sofar, cost, output); // don't choose cur
        for (int i = 0; i < M; ++i) {
            sofar[i] += arr[cur][i];
        }
        helper(cur + 1, sofar, cost + costs[cur], output); // choose cur
    }

    void solve() {
        vector<int> sofar(M, 0);
        int output = numeric_limits<int>::max();
        helper(0, sofar, 0, &output);

        if (output ==  numeric_limits<int>::max()) {
            cout << -1 << endl;
        } else {
            cout << output << endl;
        }
    }
};

int main() {
    Solution sol;
    sol.load();
    sol.solve();
}
