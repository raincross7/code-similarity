#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <numeric>
#include <cmath>

using namespace std;

typedef long long int lld;

const lld mod = 1e9+7;
const lld INF = 1e9;
const lld MAX = 1e9;

int main()
{
	lld n,m;
	cin >> n >> m;
	vector<lld> x(n),y(m);
	for(int i = 0; i < n; i++)
	{
		cin >> x[i];
		x[i] += MAX;
		x[i] %= mod;
	}
	for(int i = 0; i < m; i++)
	{
		cin >> y[i];
		y[i] += MAX;
		y[i] %= mod;
	}

	vector<lld> x_sum(n),y_sum(m);
	x_sum[0] = x[0];
	y_sum[0] = y[0];

	for(int i = 1; i < n; i++)
	{
		x_sum[i] = x_sum[i-1] + x[i];
		x_sum[i] %= mod;
	}
	for(int i = 1; i < m; i++)
	{
		y_sum[i] = y_sum[i-1] + y[i];
		y_sum[i] %= mod;
	}

	lld A=0,B=0;

	for(int i = 1; i < n; i++)
	{
		A += i*x[i] - x_sum[i-1];
		A %= mod;
	}
	for(int i = 1; i < m; i++)
	{
		B += i*y[i] - y_sum[i-1];
		B %= mod;
	}

	cout << (A*B)%mod << endl;

	return 0;
}