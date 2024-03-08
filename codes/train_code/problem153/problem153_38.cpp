#include <numeric>
#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <cassert>
#include <algorithm>
#include <math.h> 
#include <set>
#include <map>
#include <utility>
#include <deque>
#include <queue>


using namespace std;

#define ll long long int
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repp(i, n) for(ll i = 1; i <= n; i++)
#define sort(v) sort((v).begin(), (v).end())
#define riverse(v) reverse((v).begin(), (v).end())
#define pb push_back
#define mp make_pair
#define all(a)  (a).begin(),(a).end()
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vb = vector<bool>;
using vvb = vector<vb>;
const ll MOD = 1e9 + 7;
vi alphabet = { 'a','b','c','d','e','f','g','h','i','j','k','l','m',
               'n','o','p','q','r','s','t','u','v','w','x','y','z' };

ll Foo(ll num) {
    ll a;
    if ((num % 4) == 0) a=num;
    else if ((num % 4) == 1) a=1;
    else if ((num % 4) == 2) a=num+1;
    else a=0;
    return a;
}

int main() {
    ll A, B;
    cin >> A >> B;
    ll ans;
    if (A == 0) ans = Foo(B);
    else {
        ll a = Foo(A-1);
        ll b = Foo(B);
        ans = a ^ b;
    }
    cout << ans << endl;
}