#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
using namespace std;
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define PI 3.1415926535897932384626433832795
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
long long MOD = 1e9+7;
pair<int,int> dx[4] = {{1,0},{-1,0},{0,1},{0,-1}};
const int RANDOM = chrono::high_resolution_clock::now().time_since_epoch().count();
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
struct chash {
    int operator()(int x) const { return x ^ RANDOM; }
};
string toString(long long x)
{
stringstream ss;
ss << x;
string str = ss.str();
return str;
}
long long fastpow(long long x,long long k)
{
    if(!k)
        return 1;
    if(k & 1)
        return ((x * fastpow(x,k-1) % MOD) % MOD) % MOD;
    long long ans = fastpow(x,k/2);
    ans %= MOD;
    ans *= ans;
    ans %= MOD;
    return ans;
}
long long sumF(long long x)
{
    int s = 0;
    while(x)
        s += x%10,x /= 10;
    return s;
}
int Freq[5];
int main()
{
    IO;
    for(int i = 1;i <= 6;i++)
    {
        int x;
        cin >> x;
        Freq[x]++;
    }
    for(int i = 1;i <= 4;i++)
    {
        if(Freq[i] >= 3)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";


    return 0;
}
