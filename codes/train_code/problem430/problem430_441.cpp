#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    int d, r;
    double f;

    cin >> a >> b;

    d = a / b;
    r = a % b;
    f = a / (double)b;

    printf("%d ", d);
    printf("%d ", r);
    printf("%f\n", f);

    return 0;
}