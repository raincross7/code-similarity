#include <cstdio>
#include <cmath>
using namespace std;

int main(void){
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("%0lf\n", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));

    return 0;
}
