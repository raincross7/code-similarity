#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x,a,b;
    cin >> x >> a >> b;

    if(0 <= a-b) cout << "delicious" << endl;
    else if(b-a <= x) cout << "safe" << endl;
    else cout << "dangerous" << endl;
    return 0;
}