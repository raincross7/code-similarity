#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        cout << fixed  << pow(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0), 1.0 / 2.0) << endl;
        return 0;
}
