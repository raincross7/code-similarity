#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <string>
#include <math.h>
#include <set>
#include <deque>
using namespace std;
typedef long long ll;
const int mod = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    char a, b;
    cin >> a >> b;
    if (a > b) cout << ">";
    else if (a < b) cout << "<";
    else cout << "="; 
}
