#include <bits/stdc++.h>

using namespace std;

#define FOR(i, m, n) for (int i = m; i < n; ++i)
#define FORD(i, m, n) for (int i = m; i >= n; --i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define REP1(i, n) for (int i = 0; i <= n; ++i)
#define REPR(i, n) for (int i = n; i >= 0; --i)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	string s;
	cin>>s;
	if(s[0]==s[1]&&s[1]!=s[2]&&s[2]==s[3])cout << "Yes" << endl;
	else if(s[0]==s[2]&&s[1]==s[3]&&s[0]!=s[1])cout << "Yes" << endl;
	else if(s[0]==s[3]&&s[1]==s[2]&&s[0]!=s[1])cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}