#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    double x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double data = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("%lf\n", data);
    return 0;
}