#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    char op;
    cin >> a >> op >> b;

    if(op=='+')cout << a+b;
    else cout << a-b;

    cout << endl;

    return 0;
}