#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	for(int i = 0; i < (int)s.size(); i += 2)
		printf("%c", s[i]);
	printf("\n");
}
