#include <bits/stdc++.h>
using namespace std;

int main() {
 	string s, t;
  	cin >> s >> t;
 	int ans = 0;
  	for(int i = 0; i < 3; i++) {
     	ans = (s[i] == t[i]) ? (ans + 1) : (ans); 
    }
  	cout << ans << endl;
  	return 0;
}