#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    int x;
    cin >> x;

    string ans;
    if (x < 1200)
    {
        ans = "ABC";
    }
    else
    {
        ans = "ARC";
    }
    cout << ans << endl;
    return (0);
}