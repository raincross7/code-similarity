#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

const ll LINF = 1e18;
const int INF = 1e9;
const ll MOD = 1000000007;


int main(){

    int a, b, c;
    cin >> a >> b >> c;

    if((a <= c) && (c <= b)) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}