//#pragma GCC optimize("O2")
#include<bits/stdc++.h>
#include <deque>
#include<iomanip>
#include <ext/pb_ds/assoc_container.hpp> //required
#include <ext/pb_ds/tree_policy.hpp> //required
#include<stdlib.h>
#include<stdio.h>
using namespace __gnu_pbds; //required
#define ll long long
#define ull unsigned ll
#define ld long double
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define mul(x,y) ((ll)(x)*(y))%mod
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define forn(i, n)    for(int i = 0; i < n; i++)
#define FOR(i, x, y)  for(size_t i=size_t(x); i<size_t(y); i++)
#define ROF(i, x, y)  for(size_t i=size_t(x-1); i>=size_t(y); i--)
#define all(x) (x).begin(), (x).end()
using namespace std;
int clz(unsigned long long N) {
    return N ? 64 - __builtin_clzll(N) : -INFINITY;
}
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
unordered_map<long long, int, custom_hash> safe_map;
gp_hash_table<long long, int, custom_hash> safe_hash_table;
template<typename T>
ostream& operator<<(ostream& os, const pair<T,T> &p){
    os<<"["<<p.first<<", "<<p.second<<" ]";
    return os ;
}
template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
    os << "[";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i];
        if (i != v.size() - 1)
            os << ", ";
    }
    os << "]\n";
    return os;
}
template <typename T>
istream& operator>>(istream& os, vector<T>& v)
{
    //int temp;
    for (unsigned int i = 0; i < v.size(); ++i) {
        os>>v[i];
    }
    return os;
}
template <typename T>
void o1(vector<T> &v){
    for(auto i: v) cout<<i<<" ";
    cout<<"\n";
}
//template<typename T>
void google(int cas){
    cout<<"Case #"<<cas<<": ";
}
#define vi vector<int>
#define vvi vector<vi>
#define ii pair<int, int>
#define vii vector<ii>
#define vll vector<ll>
#define vvl vector<vll>
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void make_set(ll v, vll &parent, vll &size) {
    parent[v] = v;
    size[v] = 1;
}
ll find_set(ll v, vll &parent) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v],parent);
}
void union_sets(ll a, ll b,vll &parent, vll &size) {
    a = find_set(a,parent);
    b = find_set(b,parent);
    if (a != b) {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}
void dfsvisit(vvl &adj,ll v, vll &visited, vll &order){
    visited[v]=1;
    for(auto i: adj[v]){
        if(!visited[i]){
        dfsvisit(adj, i, visited, order);
        }
    }
    order.pb(v);
}
ll MPOW( ll a, ll b, ll m) { if(b==0) return 1; ll x=MPOW(a,b/2,m); x=(x*x)%m; if(b%2==1) x=(x*a)%m; return x;}
ll MINV( ll a, ll m) { return MPOW(a,m-2,m);}
template <typename T> using ordered_set =  tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
inline T ceil(T a, T b){
    return ((a+b-1)/b);
}
ll p = (ll)1e9 + 7;
void dfs(vector<vll> &adj,ll u, ll v, vvl &dp){
    for(auto i : adj[u]){
        if(i==v) continue;
        dfs(adj, i, u, dp);
        dp[u][0] *= (dp[i][0] + dp[i][1]);
        dp[u][0] %=p;
        dp[u][1] *= dp[i][0];
        dp[u][1] %=p;
    }
} 
vector<vector<ll>> primes;
vector<vector<ll>> facts;
void init_prime(ll size=1e6+1)
{
	primes.resize(size);
 
	for(ll i=2;i<size;i++)
	{
		if(primes[i].size()==0)
		{
			for(ll j=i;j<size;j+=i)
			primes[j].push_back(i);
		}
	}
}
 
void init_facts(ll size=2e5+1)
{
	facts.resize(size);
 
	for(ll i=1;i<size;i++)
	{
		for(ll j=i;j<size;j+=i)
		facts[j].push_back(i);
	}
}
bool isprime(ll n){
    for(ll i=2;i*i <=n;i++){
        if(n%i == 0) return false;
    }
    return true;
}
const int g = 305;
inline void add_self(ll &a, ll b){
    a+=b;
    if(a >= p) a-=p;
}
void sub_self(ll &a, ll b){
    a= a - b + p;
    if(a >= p) a-=p;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(NULL);
    cin.tie(NULL);
    int q=1;
    //cin>>q;
    while(q--){
        ll n; cin>>n; vvl adj(n, vll()); ll u,v;
        forn(i, n-1){
            cin>>u>>v; u--;v--;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        vvl dp(n, vll(2,1));
        dfs(adj, 0, -1, dp);
        cout<<(dp[0][0] + dp[0][1])%p<<"\n";
    }
    return 0;
}
