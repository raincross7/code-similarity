#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<sstream>
#include<iterator>
#include<list>

using namespace std;

typedef  long long int lint;

#define rep(i, n) for (lint i = 0; i < n; i++)
#define sort(v) sort((v).begin(), (v).end())
#define reverse(v) reverse((v).begin(), (v).end())
#define upper(v,hoge) upper_bound(v.begin(),v.end(),hoge)
#define lower(v,hoge) lower_bound(v.begin(),v.end(),hoge)
#define mp make_pair
#define enld endl

int main() {
	lint N, M;
	cin >> N >> M;
	vector<vector<char>>A(N, vector<char>(N));
	vector<vector<char>>B(M, vector<char>(M));
	rep(i, N) {
		rep(j, N) {
			cin >> A[i][j];
		}
	}
	rep(i, M) {
		rep(j, M) {
			cin >> B[i][j];
		}
	}
	bool ok = true;
	for (int i = 0; i <= N - M; i++) {
		for (int j = 0; j <= N - M; j++) {
			ok = true;
			rep(k, M) {
				rep(l, M) {
					if (A[i + k][j + l] != B[k][l]) {
						ok = false;
					}
				}
			}
			if (ok) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
}