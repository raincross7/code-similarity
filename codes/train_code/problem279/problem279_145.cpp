#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <iomanip>
#include <bitset>
#include <set>
#include <map>
#include <stdio.h>
#include <numeric>

#define rep(i,n) for (long long int i = 0; i < (n); i++)
#define rep1(i,n) for (long long int i = 1; i < (n); i++)
#define FOR(i,a,b) for (int i=(a); i < (b); i++)
#define INF 100000000000
#define MOD 1000000007 //10^9+7
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 負の数にも対応した % 演算
long long mod(long long val, long long m) {
    long long res = val % m;
    if (res < 0) res += m;
    return res;
}

long long gcd(ll a, ll b) 
{
    if (a % b == 0) {
        return b;
    } else {
        return gcd(b, a % b);
    }
}

long long lcm(ll a, ll b)
{
    return a / gcd(a, b) * b ;
}

int main()
{
    string s; cin >> s;
    int b = 0, r= 0;
    rep(i,s.length()) {
        if(s[i] == '1')
            b++;
        else
            r++;
    }
    cout << min(b,r)*2 << endl;
    return 0;
}
