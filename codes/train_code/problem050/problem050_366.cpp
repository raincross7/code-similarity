#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.at(5) == '0' && (s.at(6) <= '4')) cout << "Heisei" << endl;
    else cout << "TBD" << endl;
}