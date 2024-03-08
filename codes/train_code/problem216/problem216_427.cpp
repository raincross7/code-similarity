/// kazuki08
/*
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
typedef long long ll;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
#define ar array
//#define inf 1000000000
#define mod 1000000007
#define dmp(x) cerr<<"line "<<__LINE__<<" "<<#x<<":"<<x<<endl
#define fs first
#define sc second
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define mt make_tuple
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
template<class S,class T> ostream& operator<<(ostream& o,const pair<S,T> &p){
    return o<<"("<<p.fs<<","<<p.sc<<")";
}
template<class T> ostream& operator<<(ostream& o,const vector<T> &vc){
    o<<"{";
    for(const T& v:vc) o<<v<<",";
    o<<"}";
    return o;
}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int MAXN = 202000;
int n,m,a[MAXN],sum,ans;
map<int,int> mp;

signed main(){
IOS;
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
  
  cin >> n >> m;
  mp[0]++;
  for(int i=1;i<=n;i++){
    cin >> a[i];
    sum+=a[i];
    sum%=m;
    ans+=mp[sum];
    mp[sum]++;
  }
  cout << ans << endl;


return 0;
}
///....
