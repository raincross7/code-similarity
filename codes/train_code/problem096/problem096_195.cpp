#include <algorithm>
#include <bitset>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stdio.h>
#include <string>
#include <vector>

#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<int, int>;
using LP = pair<ll, ll>;
const double PI = 3.1415926535897932;

int main()
{
	string s, t, u;
	int a, b;
	cin >> s >> t;
	cin >> a >> b;
	cin >> u;

	if (u == s) {
		a--;
	}
	if (u == t) {
		b--;
	}

	cout << a << " " << b << endl;
	return 0;
} 