#include <bits/stdc++.h>

using namespace std;

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define ull unsigned long long int

const int INF = 1e9 + 7;
const int N = 1e5+5;


int main() {

	IO;

	int n, m;
	cin >> n >> m;
	
	if (n <= m) {
		for (int i = 1; i <= m; ++i) 
			cout << n;
	}
	else {
		for (int i = 1; i <= n; ++i) 
			cout << m;
	}

}
