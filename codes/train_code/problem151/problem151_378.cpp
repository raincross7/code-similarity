#include <iostream>

using namespace std;

int main(void)
{	
	int n;
	cin >> n;
	
	cout << "Christmas";
	for (int i = 0; i < 25 - n; i++) {
		cout << " Eve";
	}
	cout << endl;

	return 0;
}
