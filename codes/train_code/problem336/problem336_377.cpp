#include <iostream>


using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	cout << (k > 1? n-k: 0);
	return 0;
}