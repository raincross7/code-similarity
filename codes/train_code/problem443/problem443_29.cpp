#include<bits/stdc++.h>
#define Abra_Ka_Dabra ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
using namespace std;

const long long mod = 1e9 + 7;
const double PI = acos(-1);
const double EPS = 1e-9;


int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	Abra_Ka_Dabra

	int n;
	cin >> n;
	set<int> x;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		x.insert(tmp);
	}
	if (x.size() == n) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}

