#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<cmath>
#include<list>
#include<set>
#include<map>

using namespace std;
long long MOD = 1000000007LL;
const double PI = 3.14159265358979323846;
#undef INT_MIN
#undef INT_MAX
#define INT_MIN -2147483648
#define INT_MAX 2147483647
#define endl "\n"

int main() {
	int N, M;
	cin >> N >> M;
	int n = N - M;
	int m = M;

	int nTime = n * 100;
	int mTime = m * 1900;
	long long time = nTime + mTime;
	for (int i = 0; i < m; ++i) {
		time *= 2;
	}

	cout << time << endl;
	return 0;
}