#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int x, a, b;
    cin >> x >> a >> b;
    int diff = b - a;
    if (diff <= 0)
        cout << "delicious";
    else if (diff > x)
        cout << "dangerous";
    else if (diff <= x)
        cout << "safe";
    return 0;
}