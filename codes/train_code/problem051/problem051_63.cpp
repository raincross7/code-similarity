
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	if(a == b && b == c && c == a){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	return 0;
}
