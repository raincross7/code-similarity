#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	cout << A + B + C - max({A, B, C}) << endl;
	return 0;
}