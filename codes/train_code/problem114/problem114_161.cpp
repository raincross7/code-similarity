#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];
	int ans = 0;
	for (int i = 0; i < N; i++) if (A[A[i] - 1] == i + 1) ans++;
	cout << ans / 2 << endl;
}
