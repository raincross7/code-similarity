#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	printf("%d %d %f\n", a / b, a % b, (a * 1.0) / (b * 1.0));

	return 0;
}
