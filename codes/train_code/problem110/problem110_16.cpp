#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <cmath>

using namespace std;
#define PI 3.1415926535897932384626433832795
#define MOD (1000000007)
#define EPS (1e-15)
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repc(i, s, n) for (int i = (s); i <= (n); i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define rrepc(i, s, n) for (int i = (s); i >= (n); i--)
#define bet(x, a, b) (a) <= (x) && (x) < (b)
typedef long long ll;
typedef unsigned long long ull;

int main()
{
	int N, M, K;
	bool ans = false;

	cin >> N >> M >> K;

	repc(i, 0, N) repc(j, 0, M) {
		int black = 0;
		black += M * i;
		black += (N - i) * j;
		black -= i * j;
		if (black == K) ans = true;
	}

	cout << (ans ? "Yes" : "No") << endl;

	return 0;
}
