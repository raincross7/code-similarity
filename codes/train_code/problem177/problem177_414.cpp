#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define endl "\n"
#define all(x) x.begin(), x.end()
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	set<char> se;
	for(int i = 0; i < s.size(); i++) {
		se.insert(s[i]);
	}
	if(se.size() == 2) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}
