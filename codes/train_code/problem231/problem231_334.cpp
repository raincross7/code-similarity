#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <queue>
#include <deque>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <stack>
#include <cstdio>
#include <climits>
#include <tuple>
#include <ctime>
#define FOR(i,a,n) for (int i = a; i < n; i++)
#define IFOR(i,n,a) for (int i = n; i >= a; i--)
#define mp make_pair
#define full(a) a.begin(), a.end()
#define SZ(x) ((int)(x).size())
#define VI vector<int>
#define PII pair<int, int>
#define trav(a,x) for (auto& a : x)
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
using namespace std;
const int mod = 998244353;



int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b, c, k; cin >> a >> b >> c >> k;
    while (k)
    {
        if (b <= a)
        {
            b <<= 1;
            k--;
            continue;
        }
        if (c <= b)
        {
            c <<= 1;
            k--;
            continue;
        }
        k--;
    }
    if (a < b && b < c)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
