#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a == b && b == c) {
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}
}