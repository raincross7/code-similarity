#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <string>
#include <math.h>
#include <limits.h>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <bitset>
#include <cassert>
#include <random>
#include <functional>
#include <stack>
#include <iomanip>
#include <cassert>
using namespace std;
long long MOD = 1e9 + 7;

int N;
vector<int> A;
vector<vector<vector<int>>> dp;

void DP(int turn, int front, int have) {
	//先手
	if (turn == 0) {
		for (int n = front + 1; n < N + 2; n++) {
			if (dp[1][n][n - 1] == INT_MAX)DP(1, n, n - 1);
			dp[0][front][have] = max(dp[0][front][have], dp[1][n][n - 1]);
		}
		dp[0][front][have] = max(dp[0][front][have], abs(A[N + 1] - A[have]));
	}
	else {
		for (int n = front + 1; n < N + 2; n++) {
			if (dp[0][n][n - 1] == -1)DP(0,n, n - 1);
			dp[1][front][have] = min(dp[1][front][have], dp[0][n][n - 1]);
		}
		dp[1][front][have] = min(dp[1][front][have], abs(A[N + 1] - A[have]));
	}
}

int main() {
	cin >> N;
	A.resize(N + 2);
	cin >> A[0] >> A[1];
	for (int n = 2; n < N + 2; n++)cin >> A[n];
	dp.resize(2);
	dp[0].resize(N + 2, vector<int>(N + 2, -1));
	dp[1].resize(N + 2, vector<int>(N + 2, INT_MAX));
	DP(0, 2, 1);
	cout << dp[0][2][1] << endl;
	return 0;
}
