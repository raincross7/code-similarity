#include <bits/stdc++.h>
using namespace std;
int main(void){
    int a, b, x, y;
    scanf("%d%d%d%d", &a, &b, &x, &y);
    printf("%lf %d\n", double(a)*double(b) / 2, x + x == a&&y + y == b);
}