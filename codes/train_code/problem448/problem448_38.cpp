#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define PI 3.1415926535897932384626433832795
#define endl "\n"
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
long long MOD = 1e9+7;
pair<int,int> dx[4] = {{1,0},{-1,0},{0,1},{0,-1}};
const int RANDOM = chrono::high_resolution_clock::now().time_since_epoch().count();
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
struct chash {int operator()(int x) const { return x ^ RANDOM; }};
string toString(long long x){stringstream ss;ss << x;string str = ss.str();return str;}
long long fastpow(long long x,long long k){if(!k)return 1;if(k & 1)return ((x * fastpow(x,k-1) % MOD) % MOD) % MOD;
long long ans = fastpow(x,k/2);ans %= MOD;ans *= ans;ans %= MOD;return ans;}
long long sumF(long long x){int s = 0;while(x)s += x%10,x /= 10;return s;}
bool isS(char c){return (c >= 'a' && c <= 'z');}
bool isB(char c){return (c >= 'A' && c <= 'Z');}
bool isD(char c){return (c >= '0' && c <= '9');}
bool isSqrt(long long x){ long long f = sqrt((long double)x + 0.5); return f*f == x;}
bool isCubic(long long x) {long long f = cbrt((long double)x + 0.5); return f*f*f == x;}
long long lcm(long long a,long long b){return a * (b / __gcd(a,b));}
vector<long long> divVec(long long x){vector<long long> tmp;for(long long i = 1;1LL*i*i <= x;i++){if(x % i == 0){tmp.push_back(i);if(x / i != i)
tmp.push_back(x / i);}}return tmp;}
long long invMod(long long x){return fastpow(x,MOD - 2) % MOD;}
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    IO;
    int n;
    cin >> n;
    cout << (n-2) * 180;
    return 0;
}
