#include <iostream>
using namespace std;

int main(){
	int H , W;
	while(1){
		cin >> H >> W;
		if(H==0 && W==0) break;
		for(int i=1 ; i<=H ; i++){
			for(int j=1 ; j<=W ; j++){
				cout << '#';
			}
			cout << endl;
		}
		cout << endl;
	}
}