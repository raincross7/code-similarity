#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);++i)
#define all(a) (a).begin(),(a).end()
#define dunk(a) cout << (a) << endl
#define rall(a) (a).rbegin(),(a).rend()
const int INF = 2e9;
using namespace std;
using Graph = vector<vector<int>>;
typedef pair<int,int> P;
typedef long long ll;

int main(){
    string a, b, c; cin >> a >> b >> c;
    if(a[a.size()-1] == b[0] && b[b.size()-1] == c[0]) cout << "YES" << endl;
    else cout << "NO" << endl;
}