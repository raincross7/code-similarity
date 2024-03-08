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
using namespace std;

template<class T>
void in(vector<T>& V) {
	for (auto itr = V.begin(); itr != V.end(); itr++)cin >> *itr;
	return;
}

template<class T>
void out(vector<T>& V) {
	for (T& itr : V)cout << itr << endl;
	return;
}

long long N, K;
vector<long long> A, B;

int main() {
	cin >> N >> K;
	A.resize(N);
	B.resize(N);
	for (int n = 0; n < N; n++)cin >> A[n] >> B[n];
	long long ans = 0;
	for (int c = 29; c >= 0; c--) {
		if ((K >> c)&1) {
			long long KK = K;
			KK >>= (c + 1);
			KK <<= (c + 1);
			long long temp = 0;
			for (int n = 0; n < N; n++) {
				long long AA = A[n];
				AA >>= (c);
				AA <<= (c);
				if (((~KK)&AA) == 0) {
					temp += B[n];
				}
			}
			ans = max(ans, temp);
		}
	}
	long long temp = 0;
	for (int n = 0; n < N; n++) {
		if ((A[n] | K) == K)temp += B[n];
	}
	ans = max(ans, temp);
	cout << ans << endl;
	return 0;
}