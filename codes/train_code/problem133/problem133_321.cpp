#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    long double x1,y1,x2,y2;
    
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    
    cout.precision(4); // ????????? 3????????????????????????
    cout.setf(ios::fixed);
//    cout << setiosflags(ios::scientific); // ?属???属??即?????????????????即?????????
 
    cout << sqrt(pow(x1-x2, 2.0)+pow(y1-y2, 2.0)) << endl;
        
        return 0;
}