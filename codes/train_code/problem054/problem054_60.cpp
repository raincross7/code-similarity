#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<map>
#include<cmath>
#include<bitset>
#include<string>
typedef long long ll;
#define PB	push_back
#define FOR(n)			for(int i = 0; i < n; ++i)
#define RFOR(n)			for(int i = n; i >= 0; --i)
#define FORR(start,end) for(int i = start; i < end; ++i)
#define COUT(n)			cout << n << " " << flush
#define vi(v)			vector<int> v
#define vii(v)			vector<pair<int,int>> v
#define pii(p)			pair<int,int> p
#define mii(m)			map<int, int> m
#define msi(m)			map<string, int, less<>> m
#define mmsi(m)			multimap<string, int, less<>> m
#define mkp(a,b)		make_pair(a,b)
#define ALL(obj)		obj.begin(), obj.end()
const double PI	 = 3.141592;
const int	 MOD = 1e9 + 7;
using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	for(int i = 1; i <= 1009; ++i) {
		if((int)(i * 0.08) == a && (int)(i * 0.1) == b) {
			cout << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main() {
	solve();
	return 0;
}