#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	cout << a/b << " " <<  a%b << " " << fixed << setprecision(5) << a*1.0/b << endl;
	return 0;
}
