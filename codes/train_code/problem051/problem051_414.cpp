#include<iostream>
#include<algorithm>
#include<set>
#include<math.h>
#include<vector>
#include<sstream>
#include<queue>
#include<functional>
#include<bitset>
#include<cstdio>
#include<iomanip>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include <string.h>
using ll = long long;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define reps(i,x) for(ll i=1;i<=(ll)(x);i++)
#define rrep(i,x) for(ll i=((ll)(x)-1);i>=0;i--)
#define rreps(i,x) for(ll i=(ll)(x);i>0;i--)
#define all(x) (x).begin(),(x).end()
#define m0(x) memset(x,0,sizeof(x))
#define vll vector<ll>
#define vi vector<int>
#define vpll vector<pair<ll,ll>>
#define vpi vector<pair<int,int>>
#define mod 1000000007 
using namespace std;
ll q[31];
ll r[31];
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b && b==c && c==a) cout << "Yes";
    else cout << "No";
    cout << endl;
}

