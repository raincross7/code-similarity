#include <bits/stdc++.h>
using namespace std;

int main(){	
	int n;
	string s; 
	cin >> n >> s;
	int ans = 1;
	
	for(int i = 0;i < n-1;++i)
		ans += s[i] != s[i+1];
	
	cout << ans;
}	
