#include <bits/stdc++.h>
#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
#define ll long long
#define fix(f,n) std::fixed<<std::setprecision(n)<<f

ll mod = 1e9 + 7;
 
using namespace std;
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag,
		tree_order_statistics_node_update> ordered_set;
		
#ifndef ONLINE_JUDGE
template<typename T>
void __p(T a) {
  cout<<a;
}
template<typename T, typename F>
void __p(pair<T, F> a) {
  cout<<"{";
  __p(a.first);
  cout<<",";
  __p(a.second);
  cout<<"}";
}
template<typename T>
void __p(std::vector<T> a) {
  cout<<"{";
  for(auto it=a.begin(); it<a.end(); it++)
    __p(*it),cout<<",}"[it+1==a.end()];
}
template<typename T, typename ...Arg>
void __p(T a1, Arg ...a) {
  __p(a1);
  __p(a...);
}
template<typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
  cout<<name<<" : ";
  __p(arg1);
  cout<<endl;
}
template<typename Arg1, typename ... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args) {
  int bracket=0,i=0;
  for(;; i++)
    if(names[i]==','&&bracket==0)
      break;
    else if(names[i]=='(')
      bracket++;
    else if(names[i]==')')
      bracket--;
  const char *comma=names+i;
  cout.write(names,comma-names)<<" : ";
  __p(arg1);
  cout<<" | ";
  __f(comma+1,args...);
}
#define trace(...) cout<<"Line:"<<__LINE__<<" ", __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define trace(...)
#endif

struct edge{
	int a, b, weight;
};
		
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
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
		
long long modInverse(long long a, long long m) { 
    if(__gcd(a, m) != 1){
		throw "modular inverse does not exist.";
	}
	long long m0 = m;
    long long y = 0, x = 1; 
    if (m == 1) return 0; 
    while (a > 1) {  
        long long q = a / m; 
        long long t = m;  
        m = a % m, a = t; 
        t = y; 
        y = x - q * y; 
        x = t; 
    }  
    if (x < 0) 
       x += m0; 
    return x; 
} 

vector<int> sieveOfEratosthenes(int n) {
	vector<int> primes;
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
	for (int p = 2; p <= n; p++)
		if (prime[p])
			primes.push_back(p);
	return primes;
}

int add(int a, int b) {
	a += b;
	if (a >= mod) a -= mod;
	return a;
}
 
int sub(int a, int b) {
	a -= b;
	if (a < 0) a += mod;
	return a;
}
 
int mul(ll a, int b) {
	return (a * b) % mod;
}
 
int pwr(int x, int e) {
	int res = 1;
	while (e) {
		if (e & 1) {
			res = mul(res, x);
		}
		x = mul(x, x);
		e /= 2;
	}
	return res;
}
vector<vector<int>> adj;
vector<vector<int>> dp;

void dfs(int u, int p){
	dp[u][0] = dp[u][1] = 1;
	for(int v: adj[u]) if(v != p) {
		dfs(v, u);
		dp[u][0] = mul(dp[u][0], add(dp[v][0], dp[v][1]));
		dp[u][1] = mul(dp[u][1], dp[v][0]);
	}
}

void solve() {
	int n;
	cin >> n;
	adj.resize(n);
	dp.resize(n, vector<int>(2));
	int u ,v;
	for(int i = 0; i < n-1; i++){
		cin >> u >> v;
		u--;
		v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(0, -1);
	cout << add(dp[0][0], dp[0][1]) << "\n";
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	//cin >> t;
	for (int i = 0; i < t; i++) {
		solve();
	}
	return 0;
}
