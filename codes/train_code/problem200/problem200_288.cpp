#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main(){
    int a, b;
    cin >> a >> b;
    if ((a*b)%2 == 0) cout << "Even" << endl;
    else cout << "Odd" << endl;
}