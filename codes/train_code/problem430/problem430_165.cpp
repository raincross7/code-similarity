#include <cstdio>
using namespace std;
 
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d %.5lf\n", a / b, a % b, (double)a / (double)b);
    return 0;
}