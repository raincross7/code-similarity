#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int a, b, c; scanf("%d%d%d", &a, &b, &c);
	int m = min(min(a, b), c);
	int M = max(max(a, b), c);
	printf("%d %d %d\n", m, (a + b + c) - (m + M), M);
}