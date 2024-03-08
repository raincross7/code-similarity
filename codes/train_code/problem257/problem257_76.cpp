#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define mem(a, b) memset(a, b, sizeof(a))

const int MOD = 1000000007;
const int MAX = (int) 1e9;
const double PI = 3.141592653589793238462643383279502884;

template <typename T, typename U>
T max(T x, U y) {
    return x > y ? x : y;
}

template <typename T, typename U>
T min(T x, U y) {
    return x < y ? x : y;
}

template<typename T>
void debug(string msg, T t) {
	cout << msg << ": " << t << "\n";
}

int toDigit(char c) { return c - '0'; }

int h, w, k, ans;
char g[6][6];

int main() {

	cin >> h >> w >> k;

	for(int r = 0; r < h; r++) {
		for(int c = 0; c < w; c++) {
			cin >> g[r][c];
		}
	}

	// for every combination of rows and columns
	for(int mask = 0; mask < (1 << (h + w)); mask++) {
		int totalBlack = 0;
		// for every row
		for(int i = 0; i < h; i++) {
			// for every column
			for(int j = 0; j < w; j++) {
				if(g[i][j] == '#') {
					if(((1 << (j + h)) & mask | (1 << i) & mask) == 0) {
						totalBlack++;
					}
				}
			}
		}

		if(totalBlack == k) {
			ans++;
		}
	}

	cout << ans << "\n";

	return 0;
}