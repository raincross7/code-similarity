#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a, b;
	cin >> a >> b;
	if(abs(a-b) <= 1) cout << "Brown";
	else cout << "Alice";
}
