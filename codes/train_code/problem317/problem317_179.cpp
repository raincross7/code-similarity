#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <ctime>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

template<class T> inline T cabs(const T &x) { return x > 0 ? x : (-x); }
template<class T> inline T gcd(const T &x, const T &y) { return (y == 0) ? x : gcd(y, x % y); }
template<class T> inline T sgn(const T &x) { return (x > 0) - (x < 0); }

#define dbg(x) cout << #x << " = " << (x) << endl
#define dbg2(x,y) cout << #x << " = " << (x) << ", " << #y << " = " << (y) << endl
#define dbg3(x,y,z) cout << #x << " = " << (x) << ", " << #y << " = " << (y) << ", " << #z << " = " << (z) << endl
#define dbg4(x,y,z,w) cout << #x << " = " << (x) << ", " << #y << " = " << (y) << ", " << #z << " = " << (z) << ", " << #w << " = " << w << endl

#define out(x) cout << (x) << endl
#define out2(x,y) cout << (x) << " " << (y) << endl
#define out3(x,y,z) cout << (x) << " " << (y) << " " << (z) << endl
#define out4(x,y,z,w) cout << (x) << " " << (y) << " " << (z) << " " << (w) << endl


int main()
{
    //freopen("data.in", "r", stdin);
    int h, w;
    cin >> h >> w;
    string str;
    for(int i = 0; i < h; i ++) {
        for(int j = 0; j < w; j ++) {
            cin >> str;
            if( str == "snuke" ) {
                char ch = j + 'A';
                int d = i + 1;
                printf("%c%d\n", ch, d);
                return 0;
            }
        }
    }
    return 0;
}
