#include <cstdio>
#include <cmath>

int main() {
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    
    printf("%.5lf\n", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}
