#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;


#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define INF         100000000000000000
#define PI          3.1415926535897932384626433832795l



#define fi first
#define se second
#define pb push_back
#define f_s(a) sort(a.begin(), a.end())
#define b_s(a) sort(a.rbegin(), a.rend())
#define p(a) cout<<a<<"\n"


// ll mod = 1000000007;
// #define l(i, )
// #define rl(i, a, b) for(int i = a; i < b; i++)






// struct mycomp {
//     bool operator() (const pair<int,int> &a, const pair<int,int> &b) const{
//         if (a.second-a.first != b.second-b.first)
//         return (a.second-a.first > b.second-b.first);
//         return a.first < b.first;
//     }
// };



/////////////////////GCD//////////////////////
ll gcd(ll a, ll b)
{
	if(b==0) return a;
	return gcd(b, a%b);
}


ll extended_gcd(ll a, ll b, ll& x, ll& y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return a;
	}
	ll x1, y1;
	ll d = extended_gcd(b, a%b, x1, y1);
	x=y1;
	y=x1-y1*(a/b);
	return d;
}

////////////////////SIEVE OF ERATOSTHENES//////////////////////
vector<int> sieveoferatosthenes(int n)
{
	vector<bool> prime(n+1, true);
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(prime[i])
		{
			for(int j = i*i; j<=n; j+=i)
			{
				prime[j]=false;
			}
		}
	}
	vector<int> all_primes;
	for(int i = 2; i <=n; i++)
	{
		if(prime[i]) all_primes.pb(i);
	}
	return all_primes;
}

////////////////////BINARY EXPONENTIATION///////////////////////
ll bin_exp(ll a, ll b, ll mod)
{
	ll ans = 1;
	while(b)
	{
		if(b%2)
		{
			b--;
			ans = (ans%mod*a%mod)%mod;
		}
		b/=2;
		a = (a%mod*a%mod)%mod;
	}
	return ans;
}


///////////////////////////BFS//////////////////////////////////
void bfs(vector<int>& distance, vector<int> a[], vector<bool>& visited, int u, vector<int>& parent)
{
	visited[u]=true;
	parent[u]=-1;
	distance[u]=0;
	queue<int> q;

	q.push(u); 
    while (!q.empty()) { 
  
        int f = q.front(); 
        q.pop(); 
  		for(int i =0; i < a[f].size(); i++)
  		{
  			if(visited[a[f][i]]==false)
  			{
  				distance[a[f][i]]=distance[f]+1;
  				parent[a[f][i]]=f;
  				visited[a[f][i]]=true;
  				q.push(a[f][i]);
  			}
  		}
    } 

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	int a, p;
	cin>>a>>p;
	ll k = a*3 + p;
	cout<<k/2<<endl;
	
	return 0;
}