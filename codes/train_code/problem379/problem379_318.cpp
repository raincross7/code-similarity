#include<iostream>
using namespace std;

int main(){
	int x, y;
	cin >> x >> y;
	
	if( 2*x<=y && y<=4*x && (4*x-y)%2==0 && (y-2*x)%2==0 )	cout << "Yes" << endl;
	else	cout << "No" << endl;
	
	return 0;
}
