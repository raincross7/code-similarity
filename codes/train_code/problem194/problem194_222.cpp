#include "bits/stdc++.h"
#include <unordered_set>

#define REP(i, n) for(decltype(n) i = 0; i < (n); i++)
#define REP2(i, x, n) for(decltype(x) i = (x); i < (n); i++)
#define REP3(i, x, n) for(decltype(x) i = (x); i <= (n); i++)
#define RREP(i, n) for (decltype(n) i = (n) - 1; i >= 0; i--)

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

#define LL long long int
#define LD long double

#define INF 1000000000
#define PI 3.14159265358979323846

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

// N, E, S, W
const int dx[4] = { -1, 0,  1,  0 };
const int dy[4] = { 0, 1,  0, -1 };

typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<LL, LL> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<LL> vll;

//==============================================

#define MAX 300;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int h;
	cin >> h;

	vi A(h + 1);

	REP3(i, 1, h) {
		cin >> A[i];
	}

	REP3(i, 1, h) {
		cout << "node " << i << ": key = " << A[i] << ", ";
		if (i / 2 >= 1) cout << "parent key = " << A[i / 2] << ", ";
		if (i * 2 <= h) cout << "left key = " << A[i * 2] << ", ";
		if (i * 2 + 1 <= h) cout << "right key = " << A[i * 2 + 1] << ", ";
		cout << "\n";
	}
	return 0;
}