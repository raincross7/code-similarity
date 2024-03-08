#include <bits/stdc++.h>
#define f first
#define s second
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size())
#define ENDL '\n'
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<int> vi;
typedef vector<lli> vl;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define deb(x) cout << #x": " << (x) << endl;

const int N = 3e3+5;
const lli INF = 1e18;
const lli MOD = 1e9+7;

vi m;
vi primes(1,2);
vector<vector<ld>>nk;
void sieve(){
	m = vi(N+1,0);
	for(int i = 4; i<N; i+=2)m[i]=1;
	for(int i = 3; i*i<=N; i+=2)if(!m[i])for(int j = i*i; j<N; j+=i)m[j]=1;
	for(int i = 3; i<N; i+=2)if(!m[i])primes.pb(i);
}

void pascal(){
	nk =vector<vector<ld>>(N,vector<ld>(N,0.0));
	fore(i,0,N)nk[i][0]=nk[i][i]=1.0;
	fore(i,1,N)fore(j,1,i)nk[i][j]=nk[i-1][j-1]+nk[i-1][j];
}

lli gcd(lli a, lli b){return (b?gcd(b,a%b):a);}

lli lcm(lli a, lli b){
	if(a<b)swap(a,b);
	lli c = gcd(a,b);
	a/=c;
	return a*b;
}

int popcount(lli x) { return __builtin_popcountll(x); }

lli poww(lli a, lli b){
	lli res =1;
	while(b){
		if(b&1) res = res * a;
		a = a*a;
		b/=2;
	}
	return res;
}

lli powm(lli a, lli b){
	lli res =1;
	while(b){
		if(b&1) res = (res * a)%MOD;
		a = (a*a)%MOD;
		b/=2;
	}
	return res;
}

bool isPrime(lli x){
	if(x==1)return 0;
	for(auto i:primes){
		if(i*i>x)return 1;
		if(x%i==0)return 0;
	}
	return 1;
}

lli SUM(lli a, lli b, lli mod=MOD){
	return (a+b+mod)%mod;
}

int dx[4]={-1,0,0,1}, dy[4]={0,1,-1,0};

// ---- コーディングはここから！ ('-')7

void solve(){
	int n,k; cin>>n>>k;
	vi v(n);
	fore(i,0,n)cin>>v[i];
	vl dp(k+1,0); dp[0]=1;
	fore(i,0,n){
		vl to(k+1);
		for(int j=k;j>=0;j--){
			int l = j+1;
			int r = j+min(k-j,v[i]);
			if(l<=r){
				to[l]=SUM(to[l],dp[j]);
				if(r<k)to[r+1]=SUM(to[r+1],-dp[j]);
			}
		}
		int sum = 0;
		fore(j,0,k+1)sum = SUM(sum,to[j]), dp[j]=SUM(dp[j],sum);
	}
	cout<<dp[k]<<ENDL;

}

int main(){_
	//int t; cin>>t; while(t--)
	solve();
}
