#include <iostream>

using namespace std;

int main()
{
	int S, W;
	cin >> S >> W;

	if (S > W)
	{
		cout << "safe" << endl;
	}
	else
	{
		cout << "unsafe" << endl;
	}

	return 0;
}