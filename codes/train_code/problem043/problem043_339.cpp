#include <bits/stdc++.h>
using namespace std;

inline int read() {
    int x = 0, f = 1; char ch = getchar();
    while (ch < '0' || ch > '9') { if (ch == '-') f = -1; ch = getchar(); }
    while (ch >= '0' && ch <= '9') { x = x * 10 + ch - 48; ch = getchar(); }
    return x * f;
}

int main() {
    int n = read(), k = read();
    printf("%d\n", n - k + 1);
    return 0;
}