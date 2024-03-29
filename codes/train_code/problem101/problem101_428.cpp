#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "string"
#include "map"
#include "unordered_map"
#include "unordered_set"
#include "iomanip"
#include "cmath"
#include "random"
#include "bitset"
#include "cstdio"
#include "numeric"
#include "cassert"
#include "ctime"

using namespace std;

constexpr long long int MOD = 1000000007;
//constexpr int MOD = 1000000007;
//constexpr int MOD = 998244353;
//constexpr long long int MOD = 998244353;
constexpr double EPS = 1e-12;

//int N, M, K, H, W, L, R;
long long int N, M, K, H, W, L, R;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	K = 1000;
	M = 0;
	vector<int>v(N);
	for (auto &i : v)cin >> i;
	for (int i = 0; i < N; i++) {
		K += M * v[i];
		M = 0;
		if (i + 1 < N&&v[i] < v[i + 1]) {
			M = K / v[i];
			K %= v[i];
		}
	}
	cout << K << endl;
}