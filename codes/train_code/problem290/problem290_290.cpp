#include <bits/stdc++.h>
#include <assert.h>

using namespace std;

long long x[100000], y[100000];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> x[i];
	for (int i = 0; i < m; i++)
		cin >> y[i];
	long long xs = 0, ys = 0;
	for (int i = 0; i < n; i++)
		xs += x[i] * (i - (n - i - 1));
	for (int i = 0; i < m; i++)
		ys += y[i] * (i - (m - i - 1));
	cout << (xs % 1000000007) * (ys % 1000000007) % 1000000007 << endl;

	return 0;
}
