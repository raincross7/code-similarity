#include <bits/stdc++.h>
#define PI 3.14159265359
#define NIL (-1)
#define LL long long
using namespace std;
const int64_t MOD = 1e9 + 7;
const int INF = INT_MAX;

int main() {
	int W, H, x, y;
	cin >> W >> H >> x >> y;

	double ret = (double)W * H / 2.0;
	bool b = false;
	double h, w;
	h = H / 2.0;
	w = W / 2.0;

	if (((double)y == h) && ((double)x == w)) b = true;

	cout << fixed << setprecision(10) << ret << ' ';
	cout << b << endl;
}