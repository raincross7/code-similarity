#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s, t; cin >> s >> t;
	sort(s.begin(),s.end());
	sort(t.rbegin(),t.rend());
	cout << ( (s < t) ? "Yes" : "No") << "\n";	
	return 0;
}
