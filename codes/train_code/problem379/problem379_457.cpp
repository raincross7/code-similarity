#include <bits/stdc++.h>
using namespace std;
int x,y;
int main() {
    cin >> x >> y;
    if (y>=x*2 && y<=x*4 && y%2==0) cout<<"Yes"; else cout<<"No";
}