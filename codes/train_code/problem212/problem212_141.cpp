#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int out = 0;
	for(int i = 1; i <= n; i += 2){
		int count = 0;
		for(int j = 1; j <= i; j += 2){
			if(i % j == 0) count++;
		}
		if(count == 8) out++;
	}
	cout << out << endl;
}
