#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    char a, b;
    cin >> a >> b;

    char ans;
    if (a == b)
    {
        ans = 'H';
    }
    else
    {
        ans = 'D';
    }
    cout << ans << endl;
    return (0);
}