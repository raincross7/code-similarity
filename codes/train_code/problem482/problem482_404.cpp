#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int H, W;
	while (true) {
		cin >> H >> W;
		if (H == 0 && W == 0)break;
		for (int i=1;i<=H;i++) {
			for (int j=1;j<=W;j++) {
				if (i==1 || i==H || j==1 || j==W) {
					cout << '#';
				}else{
					cout << '.';
				}
			}
			cout <<endl;
		}
		cout <<endl;
	}


}