#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

static const int INFTY = (1 << 29);

int MinCoin(int n, int m, int c[]) {
	int T[50004];//T[n]?????????n??????????????????????????????????????????????°??????°
	for (int i = 1;i <= n;i++) T[i] = INFTY;
	T[0] = 0; //0?????????????????????0?????§OK
	for (int i = 0;i < m;i++) {
		for (int j = 0;j +c[i]<=n;j++) {
			T[j+c[i]] = min(T[j+c[i]], T[j] + 1);
		}
	}
	return T[n];
}

int main() {
	int n, m, c[21];
	cin >> n >> m;
	for (int i = 0;i <= m - 1;i++) {
		cin >> c[i];
	}

	cout << MinCoin(n,m,c) << endl;
	return 0;
}