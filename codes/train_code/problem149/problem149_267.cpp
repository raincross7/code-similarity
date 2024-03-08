#include <bits/stdc++.h>

using namespace std;
#define MOD 1000000007
#define pi 3.1415926535897932384626433832795028841971693993751058209749445923078164062
const int INF = 1e9;
#define ll long long
#define pb push_back
#define pf push_front
#define mp make_pair
#define mt make_tuple
#define ub upper_bound
#define lb lower_bound
#define popb pop_back()
#define popf pop_front()
#define ff first
#define ss second
#define vl vector<ll>
#define vi vector<int>
#define vs vector<string>
#define vll vector< pair<ll,ll> >
#define vii vector< pair<int,int> >
#define viii vector< tuple <int,int,int> >
#define vlll vector< tuple <ll,ll,ll> >
#define vvl vector<vector<ll>>
#define vv vector<vector<int>>
#define all(v) v.begin(),v.end()
#define sqrt sqrtl
#define cbrt cbrtl
#define pll pair<ll,ll>
#define pii pair<int,int>
#define mapcl map<char,ll>
#define mapci map<char,int>
#define mapll map<ll,ll>
#define mapii map<int,int>
#define seti set<int>
ifstream fin("input.txt");
ofstream fout("output.txt");
#define FOR(i, l, r) for (int i = int(l); i < int(r); ++i)
#define print(a)       for(auto x : a) cout << x << " "; cout << "\n"
#define print1(a)      for(auto x : a) cout << x.ff << " " << x.ss << "\n"
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << "\n"


ll fast_exp(ll base, ll exp) {ll res=1;while(exp>0) {if(exp%2==1) res=(res*base)%MOD;base=(base*base)%MOD;exp/=2;}return res%MOD;}
int gcd(int a,int b){while (a&&b)a>b?a%=b:b%=a;return a+b;}
int val(char c){if (c >= '0' && c <= '9')return (int)c - '0';else return (int)c - 'A' + 10;}
ll pows(int a , int b){ll res=1;for(int i=0; i<b; ++i){res*=a;}return res;}
ll logx(ll base, ll num){int cnt=0;while(num!=1){num/=base; ++cnt;}return cnt;}
ll divisibles(ll a, ll b, ll m){if(a%m==0)return (b/m)-(a/m)+1;else return (b/m)-(a/m);}// in [a,b]
string bitstring(int n, int size){string s;while(n){s+=(n%2)+'0';n/=2;}while(s.size()<size){s+='0';}reverse(all(s));return s;}
// dsu start

vi root(200001,0);
vi size(200001,1);
int find(int x){while(x!=root[x])x = root[x];return x;}
bool same(int a,int b){return find(a)==find(b);}
void unite(int a, int b){a = find(a);b = find(b);if(size[a]<size[b])swap(a,b);size[a] += size[b];root[b] = a;}

// dsu end
vi vis(200001,0);
vi adj[200001];

int main()
{	
    std::ios::sync_with_stdio(false);
    //string bitstring = std::bitset< 3 >( 7 ).to_string(); <bits> (num)
    //srand(time(0));
    //cin.tie(NULL);
    //cout.tie(NULL);
 	int n;
 	cin>>n;
 	mapii mps;
 	vi vec;
 	for(int i=0; i<n; ++i)
 	{
 		int x;
 		cin>>x;
 		if(!mps[x])
 			vec.pb(x);
 		++mps[x];
 	}
 	if(mps.size()%2) cout<<mps.size()<<"\n";
 	else cout<<mps.size()-1<<"\n";
}