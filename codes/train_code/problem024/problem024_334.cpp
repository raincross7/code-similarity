#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <string>
#include <math.h>
#include <limits.h>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <bitset>
#include <cassert>
#include <random>
#include <functional>
#include <stack>
#include <iomanip>
#include <cassert>
using namespace std;
long long MOD = 1e9 + 7;

typedef pair<long long, long long> pll;
long long N, L, T;
vector<pll> X;

int main(){
	cin >> N >> L >> T;
	X.resize(N);
	for (int n = 0; n < N; n++) {
		cin >> X[n].first >> X[n].second;
		X[n].second = 3 - 2 * X[n].second;
	}
	vector<pll> Xafter(X);
	for (int n = 0; n < N; n++) {
		Xafter[n].first += Xafter[n].second * T;
		Xafter[n].first %= L;
		Xafter[n].first += L;
		Xafter[n].first %= L;
	}
	sort(Xafter.begin(), Xafter.end(), [](pll a, pll b) {
		if (a.first != b.first)return a.first < b.first;
		else return a.second < b.second;
	});
	//あり0が順当に行けばどこにいたか求める
	int expected = 0;
	for (int n = 0; n < N; n++) {
		if (Xafter[n].first == ((X[0].first + T * X[0].second) % L + L)%L &&
			Xafter[n].second == X[0].second) {
			expected = n;
			break;
		}
	}
	//衝突回数
	long long counter = 0;
	for (int n = 1; n < N; n++) {
		if (X[n].second == X[0].second)continue;
		long long bottom = X[0].first - X[n].first;
		long long top = X[0].first - X[n].first;
		if (X[0].second == 1)top += 2 * T;
		else bottom -= 2 * T;
		counter += floor((long double)top / L) - ceil((long double)bottom / L) + 1;
	}
	for (int n = ((expected - X[0].second * counter) % N + N)%N, c = 0; c < N; c++, n = (n+1)%N) {
		cout << Xafter[n].first << endl;
	}
	return 0;
}