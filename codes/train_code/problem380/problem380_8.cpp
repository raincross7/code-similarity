#include <iostream>
#include <string>
#include <algorithm>
#include <utility> 
#include <unordered_set>
#include <vector>
#include <list> 
#include <string>
#include <iterator> 
#include <deque>
#include <array>
#include <forward_list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
#include <climits>
#include <bitset>
using namespace std;

#define N 200000
#define EPS 1e-9
#define PI 3.14159265358979323846264338327950

int arr[N];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, w, x;
	cin >> n>> m;
	x = 0;
	for (int i = 0; i < m; ++i) {
		cin >> w;
		x += w;
	}
	if (x > n)
		cout << -1 << '\n';
	else
		cout << n - x << '\n';
}
