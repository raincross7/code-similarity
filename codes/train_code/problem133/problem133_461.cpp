#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main(void) {

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dist = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
    printf("%.10lf\n", dist);

    return 0;
}