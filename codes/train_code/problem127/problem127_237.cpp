#include <stdio.h>
#include <algorithm>
using namespace std;


int main()
{
	int a, b, c, d, e; scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);

	int p = a * 60 + b, q = c * 60 + d;
	printf ("%d\n", max(0, q - p - e));
	return 0;
}
