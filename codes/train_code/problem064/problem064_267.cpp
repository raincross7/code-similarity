#include <bits/stdc++.h>

using namespace std;

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define ull unsigned long long int

const int INF = 1e9 + 7;
const int N = 1e5+5;


int main() {

	IO;

	ll a, b;
	char c;
	cin >> a >> c >> b;
	
	if (c == '+') 
		cout << a + b;
	else 
		cout << a - b;
}
