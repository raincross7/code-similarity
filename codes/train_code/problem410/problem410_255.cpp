#include <bits/stdc++.h>
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define REP(w, n) FOR(w, 0, n)
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n;
	int a[n];

	REP(i, n)
	{
		cin >> a[i];
	}
	int on = 0;
	int count = 0;
	while (a[on] != 1 && count < n)
	{
		on = a[on] - 1;
		count++;
		if (on == 1)
		{
			cout << count << '\n';
			return (0);
		}
	}
	cout << -1 << '\n';
	return (0);
}
