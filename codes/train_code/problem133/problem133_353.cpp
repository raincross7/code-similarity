#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, q;
    
    cin >> x1 >> y1 >> x2 >> y2;

    q = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    cout << fixed << setprecision(5) << q << endl;
    
    return 0;
}

