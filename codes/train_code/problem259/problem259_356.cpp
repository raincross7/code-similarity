#include <iostream>
#include<algorithm>
#include<string>
#include <cmath>
#include <vector>
#include <map>
#include <cstdio>
#pragma region Macros
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<=n;i++)
#define int long long
#define all(x) (x).begin(),(x).end()
#define swap(a,b) (a += b,b = a - b,a -= b)
#define ceil(a,b) ((a+b-1)/b)
int gcd(int a, int b) // assuming a,b >= 1
{
    if (a < b)
        swap(a, b);
    if (b == 0)
        return a;
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}
int lcm(int a, int b) // assuming a,b >= 1
{
    return  a * b / gcd(a, b);
}
using namespace std;
#pragma endregion
signed main() {
    int N;
    cin >> N ;
    if (N < 1200)
        cout << "ABC";
    else if (N < 2800)
        cout << "ARC";
    else
        cout << "AGC";
}