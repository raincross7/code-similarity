#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
#define all2(a, b) (a).begin(), (a).begin() + (b)
#define debug(vari) cerr << #vari << " = " << (vari) << endl;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	rep(i, n) cin >> v[i];

	sort(all(v));
	cout << v[v.size() - 1] - v[0] << endl;
	return (0);
}
