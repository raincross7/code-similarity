#include<iostream>
using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	while (h != 0 && w != 0) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cout << "#";
			}
			cout << endl;
		}
		cout << endl;
		cin >> h >> w;
	}
}
