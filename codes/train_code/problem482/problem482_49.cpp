#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
	int H, W;
	while (cin >> H >> W && (H || W)) {
		for (int i = 0; i < W; i++)
			cout << "#";
		cout << endl;
		for (int i = 1; i < H - 1; i++) {
			cout << "#";
			for (int j = 1; j < W - 1; j++)
				cout << ".";
			cout << "#" << endl;
		}
		for (int i = 0; i < W; i++)
			cout << "#";
		cout << endl;
		cout << endl;
	}
}