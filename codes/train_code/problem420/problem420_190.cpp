#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <string>
using namespace std;

int main()
{
	int ans, n;
	string s,c;
	cin >> s >> c;
	reverse(s.begin(), s.end());

	if (s == c) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}