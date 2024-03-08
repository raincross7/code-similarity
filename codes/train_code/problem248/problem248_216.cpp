#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int t[110000], x[110000], y[110000];
	t[0] = x[0] = y[0] = 0;
	for (int i = 0; i < N; i++) cin >> t[i+1] >> x[i+1] >> y[i+1];

	bool flag = true;
	for (int i = 0; i < N && flag; i++) {
		int time = t[i+1] - t[i];
		int dir = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
		if (time < dir) flag = false;
		if (dir % 2 != time % 2) flag = false;
	}

	if (flag) cout << "Yes" << endl;
	else cout << "No" << endl;
}