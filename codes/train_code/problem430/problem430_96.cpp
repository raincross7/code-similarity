#include <cstdio>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d %d %.5lf\n", (int)(a/b), (a%b), (double)a/b);
	return 0;
}