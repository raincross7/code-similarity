#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;

int main()
{

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double dis;
    dis = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("%f10\n",dis);

}
