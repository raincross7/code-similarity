#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int r,d,x;
	cin >> r >> d >> x;
	for(int i=0; i<10; i++){
		x = r*x - d;
		cout << x << endl;
	}
	return 0;
}