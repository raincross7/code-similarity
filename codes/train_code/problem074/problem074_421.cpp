#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using pint = pair<int,  int>;
using pll = pair<ll, ll>;
using edge = pair<int, ll>;
using Graph = vector<vector<int>>; 
using WeightedGraph = vector<vector<edge>>;
const ll INF = 1LL << 60;
const int INF32 = 1 << 29;
const ll MOD = 1000000007;

int main(){
vector<ll> v(10);
for(int i = 0; i < 4; ++i){
    int a; cin >> a;
    ++v[a];
}
string ans = "NO";
if(v[1]&&v[9]&&v[7] && v[4])ans = "YES";
cout << ans << endl;
}
