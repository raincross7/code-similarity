#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n) ; ++i)
using namespace std;
using ll = long long ;
using P = pair<int, int> ;
#define PI 3.14159265358979323846264338327950
int main () {
    string s,t,u;
    int a, b;
    cin >> s >> t;
    cin >> a >> b;
    cin >> u;
    if (s == u) {
         a -= 1;
    }
    if(t == u){
        b -= 1;
    }
    cout << a << " " << b << endl;

}

