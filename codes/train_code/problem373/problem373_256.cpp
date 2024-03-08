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

typedef pair<int, int> pii;
vector<pii> V;
vector<int> check;
int N, K;

int main() {
	cin >> N >> K;
	V.resize(N);
	for (int n = 0; n < N; n++) {
		cin >> V[n].second >> V[n].first;
		V[n].second--;
	}
	sort(V.begin(), V.end(), [](pii a, pii b) {
		return a.first > b.first;
	});
	check.resize(N, 0);
	long long sum = 0;
	long long kind = 0;
	for (int k = 0; k < K; k++) {
		sum += V[k].first;
		if (check[V[k].second] == 0)kind++;
		check[V[k].second]++;
	}
	priority_queue<pii,vector<pii>,greater<pii>> popvect;
	for (int k = 0; k < K; k++) {
		if (check[V[k].second] > 1)popvect.push(V[k]);
	}
	long long ans = sum + kind * kind;
	for (int k = K; k < N; k++) {
		if (check[V[k].second] > 0)continue;
		sum += V[k].first;
		check[V[k].second]++;
		bool able = false;
		while (!popvect.empty()) {
			pii next = popvect.top();
			popvect.pop();
			if (check[next.second] > 1) {
				sum -= next.first;
				able = true;
				break;
			}
		}
		if (!able)break;
		kind++;
		ans = max(ans, sum + kind * kind);
	}
	cout << ans << endl;
	return 0;
}