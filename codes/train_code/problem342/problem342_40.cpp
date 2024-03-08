#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <string>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <numeric>
#include <list>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <tuple>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define show(a, n) rep(i,n) {cout<<a[i]<<' ';} cout<<endl;

using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;
typedef pair<long long, long long> pll;

const int INF = 1 << 30;
const long long INFL = 1LL << 62;
const int MOD = 1000000007;
const int MAX = 100000;
const int N = 100010;

int main() {
	string s;
	cin >> s;
	int n = s.size();
	rep(i, n - 1) {
		if(s[i] == s[i + 1]) {
			cout << i + 1 << ' ' << i + 2 << endl;
			return 0;
		}
	}
	rep(i, n - 2) {
		if(s[i] == s[i + 2]) {
			cout << i + 1 << ' ' << i + 3 << endl;
			return 0;
		}
	}
	cout << "-1 -1" << endl;
	return 0;
}
