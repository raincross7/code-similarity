#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
	string s;
	cin >> s;
	rep(i, s.size()) {
		if (s[i] == '1') {
			s[i] = '9';
		}
		else if (s[i] == '9') {
			s[i] = '1';
		}
	}
	cout << s << endl;
	return 0;
}
