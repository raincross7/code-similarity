#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<limits>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef int itn;

const int inf = numeric_limits<int>::max() /4;
const ll linf = numeric_limits<ll>::max() /4;
const ull ulinf = numeric_limits<ull>::max()/4;
const double pi = acos(-1);
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int dx8[8]={-1,0,1,-1,1,-1,0,1};
const int dy8[8]={-1,-1,-1,0,0,1,1,1};

#define p_queue(i) priority_queue<i> 
#define rp_queue(i) priority_queue<i, vector<i>, greater<i>> 
#define P(p) cout<<(p)<<endl
#define rep(i,m,n) for(int i = (m); i < (int)(n); i++)
#define mod(i) ((i)%(ll)(1e9 + 7))
#define divm(a,b) (mod(a * modpow((ll)b,(ll)(1e9+5))))
#define rsort(a,b,c) sort(a, b, greater<c>())
#define vsort(v) sort(v.begin(), v.end());
#define rvsort(v) sort(v.end(), v.begin());
#define ft first
#define sd second
#define pb push_back
#define it insert
#define sz(x) ((int)(x).size())
#define lb(a,n,k) (lower_bound(a,a+n,k) - a) 
#define vlb(a,k)  (lower_bound(a.begin(),a.end(),k) - a.begin())
#define YES cout<<"YES"<< endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl  
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define ret return

ll modpow(ll i,ll j){ ll tmp=1; while(j){ if(j%2)tmp=mod(tmp*i);i=mod(i*i);j/=2;}return tmp;}
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

//ll ncr[100][100];
//ll nCr(int n, int r){if(n==r) ret ncr[n][r] = 1; if(r==0) ret ncr[n][r] = 1; if(r==1) ret ncr[n][r] = n;if(ncr[n][r]) ret ncr[n][r]; ret ncr[n][r] = nCr(n-1,r) + nCr(n-1,r-1);}

//ll npr[100][100]={};
//ll nPr(int n,int r){if(npr[n][r])ret npr[n][r];if(r==0)ret npr[n][r] = 1;if(r==1)ret npr[n][r] = n;ret npr[n][r] = n * nPr(n-1,r-1);}

//ll nHr(int n,int r){ret nCr(n+r-1,r);}

///////////////////////////////////////////////////////////////////////////



int main(){
	int n;
	cin >> n;
	int sum = -n;
    set<int> s;
    int i = 1;
	while(sum < 0){
        sum += i;
        s.it(i);
        i++;
	}
	s.erase(sum);
	for(auto ite:s)P(ite);
	return  0;
}