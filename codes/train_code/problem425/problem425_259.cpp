#include <iostream>
using namespace std;

int main(){
	int H, W;
	
	while(true){
		cin >> H >> W;

		if(H == 0 && W == 0) break;

		for(int i = 0; i < H; i++){
			for(int ii = 0; ii < W; ii++){
				cout << "#";
			}
			cout << endl;
		}
		cout << endl;
	}
	
	return 0;
}