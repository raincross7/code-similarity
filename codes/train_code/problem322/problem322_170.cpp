#include<iostream>
using namespace std;
int main() {
	int x;
	int i = 1;
	
	while (1) {
		cin >> x;
		if (x == 0) {
			break;
		}
		else {
			cout << "Case " << i << ": " << x << "\n";
		}
		i++;
	}
}