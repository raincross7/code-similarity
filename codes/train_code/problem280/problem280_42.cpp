#include<iostream>
//#include<fstream>

using namespace std;

int main() {
	//??§??????:20??\
	//?°???????:19??\
	//1??´:195??\
	//3??§?????????????????´:200??\

	//ifstream fin("in.txt");

	int n = 0;
	cin >> n;

	//1000??´????????\??°
	const int allday = 196471;// = 195 * 666 + 200 * 333 + 1

	for (int i = 0; i < n; i++) {

		int y, m, d;
		cin >> y >> m >> d;

		y--;
		int ans = 590 * (y / 3) + 195 * (y % 3);

		m--;
		ans = y % 3 == 2 ? ans + 20 * m : ans + 39 * (m / 2) + 20 * (m % 2);

		ans += d;

		cout << allday - ans << endl;
	}


	return 0;
}