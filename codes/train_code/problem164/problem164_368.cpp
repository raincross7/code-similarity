#include<bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FORR(i,a,b) for (int i = b - 1; i >= a; --i)
#define REP(i,n) FOR(i,0,n)
#define REPR(i,n) FORR(i,0,n)

int main() {
	int K, A, B;
	cin >> K >> A >> B;

	for (int i = A; i <= B; ++i) {
		if (i % K == 0) {
			cout << "OK" << endl;
			return 0;
		}
	}

	cout << "NG" << endl;
	return 0;
}