#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	int N, A;
	scanf("%d %d", &N, &A);
	printf("%d\n", N * N - A);
	return 0;
}
