#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define fsp(x) fixed << setprecision(x)
//const ll p = 1e9 + 7;
//const ll p = 998244353;
const ll inf = LLONG_MAX;
const long double pi = acos(-1);
void Yes() {cout << "Yes" << endl;}
void No() {cout << "No" << endl;}
void YES() {cout << "YES" << endl;}
void NO() {cout << "NO" << endl;}

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);

	ll a, b;
	cin >> a >> b;
	if (a + b == 15) cout << "+" << endl;
	else if (a * b == 15) cout << "*" << endl;
	else cout << "x" << endl; 
}
