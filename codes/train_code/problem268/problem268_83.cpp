#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <utility>
#include <cmath>
#include <tuple>
#include <queue>
#include <bitset>
#include <set>
#include <map>
#include <list>

using ll = long long;
using ld = long double;
using namespace std;
const int INF = 1e9+100;
const ll INF64 = 7e18l;
const int mod = 1000000007;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define ALL(a) (a).begin(), (a).end()
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    FIN;
    ll s; cin >> s;
    vector<bool> a(1000000,false);
    a[s] = true;
    ll count = 1;

    while(1){
        if(s%2 == 0) s = s/2;
        else s = 3*s + 1;
        count++;
        if(a[s] == true) break;
        a[s] = true;
    }

    cout << count << endl;
    return 0;
}

