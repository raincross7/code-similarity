#include<iostream>
using namespace std;
int main() {
	int h, w;
	while (1) {
		cin >> h >> w;
		if (h != 0 && w != 0) {
			for (int j = 0; j < h; j++) {
				for (int i = 0; i < w; i++) {
					cout << '#';
				}
				cout << endl;
			}
			cout << endl;
		}
		if (h == 0 && w == 0) { break; }
	}
	return 0;
}