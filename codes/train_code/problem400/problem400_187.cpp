#include <iostream>
#include <string>


using namespace std;

int main() {
	string Ns;
	cin >> Ns;
	int sum=0;

	for (int i = 0; i < Ns.size(); i++) {
		sum = sum + (Ns[i] - '0');
	}

	if (sum % 9 == 0) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}