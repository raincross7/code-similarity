#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0); cin.tie(); cout.tie()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define endl '\n'
#define len(a) a.size()

using namespace std;

typedef long long ll;

int main()
{
    int x; cin >> x;
    if (x >= 400 && x < 600)
        cout << "8";
    else if (x >= 600 && x < 800)
        cout << "7";
    else if (x >= 800 && x < 1000)
        cout << "6";
    else if (x >= 1000 && x < 1200)
        cout << "5";
    else if (x >= 1200 && x < 1400)
        cout << "4";
    else if (x >= 1400 && x < 1600)
        cout << "3";
    else if (x >= 1600 && x < 1800)
        cout << "2";
    else if (x >= 1800 && x < 2000)
        cout << "1";
    return 0;
}
