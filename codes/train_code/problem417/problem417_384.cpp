#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.length();
	int cnt = 0;
	
	for(int i = 1; i < n; i++) {
		if(s[i] != s[i-1]) cnt++;
	}
	
	cout << cnt;
}
