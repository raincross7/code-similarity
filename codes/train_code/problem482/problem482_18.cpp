#include <iostream>

using namespace std;

int main() {

	int h[1000], w[1000];
	int end_of_input;

	for (int i = 0;; i++) {
		cin >> h[i] >> w[i];
		if (h[i] == 0 && w[i] == 0) {
			end_of_input = i;
			break;
		}
	}
	
	for (int i = 0; i < end_of_input; i++) {
		for (int j = 0; j < h[i]; j++) {
			for (int k = 0; k < w[i]; k++) {
				
				//?????????????????????????????????????????????????????¨??????
				if (j == 0 || j == h[i]-1 || k == 0 || k == w[i]-1) {
					cout << "#";
				}
				else {
					cout << ".";
				}
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;

}