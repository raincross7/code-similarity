#include <bits/stdc++.h>
#include <assert.h>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	vector<string> ans(100);
	for (int i = 0; i < 50; i++)
		ans[i].resize(100, '#');
	for (int i = 50; i < 100; i++)
		ans[i].resize(100, '.');
	int x = 0, y = 0;
	for (int i = 0; i < a - 1; i++)
	{
		ans[y][x] = '.';
		x += 2;
		if (99 < x)
		{
			y += 2;
			x = 0;
		}
	}
	x = 0, y = 51;
	for (int i = 0; i < b - 1; i++)
	{
		ans[y][x] = '#';
		x += 2;
		if (99 < x)
		{
			y += 2;
			x = 0;
		}
	}
	cout << 100 << " " << 100 << endl;
	for (int i = 0; i < 100; i++)
		cout << ans[i] << endl;

	return 0;
}
