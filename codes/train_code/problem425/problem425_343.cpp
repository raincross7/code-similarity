#include <iostream>
#include <string>
using namespace std;

int main(){
	int H, W;

	while(true){
		cin >> H >> W;
		if(H == 0 && W == 0) break;
		for(int i = 0; i < H; i++) cout << string(W, '#') << endl;
		cout << endl;
	}
}