#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long x, y;
    cin >> x >> y;
    cout << (abs(x - y) > 1? "Alice":"Brown") << endl;
    return 0;
}
