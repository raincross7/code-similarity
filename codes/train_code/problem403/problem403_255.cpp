#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 5, mod = 1e9 + 7;



int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);
    for(int i = 0; i < b; i++) cout << a;

    return 0;
}
