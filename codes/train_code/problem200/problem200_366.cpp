#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    
	int a, b; cin >> a >> b;
	int p = a * b;
	if (p % 2 == 0) cout << "Even" << endl;
	else cout << "Odd" << endl;
    return 0;
}