#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if(b==0) return a;
	return gcd(b, a%b);
}

int main() {
	int X;
	cin>>X;
	int res = 360/(gcd(360, X));
	cout<<res<<endl;
	return 0;
}