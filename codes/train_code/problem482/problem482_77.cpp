#include <iostream>
using namespace std;

int main(){
	int a,b;
	while(1){
		cin >> a >> b;
		if(a == 0 && b == 0){
			break;
		}
		for(int i = 1; i <= a; i++){
			for(int j = 1; j <= b; j++){
				if(i == 1||j == 1||i == a||j == b){
					cout << "#";
				}
				else{
					cout << ".";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}