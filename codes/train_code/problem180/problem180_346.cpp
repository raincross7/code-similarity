#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using pint = pair<int,  int>;
using edge = pair<int, ll>;
using graph = vector<vector<edge>>;
const ll INF = 1LL << 60;
const int INF32 = 1 << 29;
const ll MOD = 1000000007;

int main() {
	int n,m, T; cin >> n>> m>> T;
    string  ans = "No";
    if(n+m>=T){
        ans = "Yes";
    }
    cout << ans << endl;
}
