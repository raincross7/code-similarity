#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,s,n) for(int i=(s);i<=(n);i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)
#define REPR(i,s,n) for(int i=(s);i>=(n);i--)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define Eunique(v) v.erase(unique(all(v)),v.end())
#define Eback(s) s.erase(s.end()-1,s.end())
#define rev(v) reverse(all(v))
#define minvec(v) *min_element(all(v))
#define maxvec(v) *max_element(all(v))
#define sumvec(v) accumulate(all(v),0)
#define mapmax(v) v.rbegin()->first
#define mapmin(v) v.begin()->first
#define pb push_back
#define pf push_front
#define m_p make_pair
#define DOUBLE fixed << setprecision(15)
#define OK puts("OK")
#define OK1 puts("OK1")
#define OK2 puts("OK2")
#define SIZE(s) (int)s.size()
#define INF ((1LL<<62)-(1LL<<31))
#define zero(x,n) setw(x) << setfill('0') << n

typedef long long ll;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<long long> vll;
typedef vector<vll> vvll;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<string> vs;

typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;
typedef vector<pair<ll,ll>> vpll;

const double pi = acos(-1.0);
const int mod=1000000007;
const int mod2=998244353;

template<class A, class B>
ostream& operator<<(ostream& ost, const pair<A, B>&p) {
	ost << "{" << p.first << ", " << p.second << "} ";
	return ost;
}

template<class T>
ostream& operator<<(ostream& ost, const vector<T>&v) {
	ost << "{";
	for (int i = 0; i<(int)v.size(); i++) {
		if (i)ost << " ";
		ost << v[i];
	}
	ost << "} \n";
	return ost;
}

template<class A, class B>
ostream& operator<<(ostream& ost, const map<A, B>&v) {
	ost << "{";
	for (auto p:v) {
		ost << "{" << p.first << ", " << p.second << "} ";
	}
	ost << "} ";
	return ost;
}

template<class T>
inline bool chmax(T& a, T b){if(a<b){a=b;return true;} return false;}

template<class T>
inline bool chmin(T& a, T b){if(a>b){a=b;return true;} return false;}

void YES(bool b) {cout << (b?"YES\n":"NO\n");}
void Yes(bool b) {cout << (b?"Yes\n":"No\n");}
void yes(bool b) {cout << (b?"yes\n":"no\n");}
void Yay(bool b) {cout << (b?"Yay!\n":":(\n");}

long long powmod(long long a,long long b){
    long long c=1;
    while(b>0){
        if(b&1) c=a*c%mod;
        a=a*a%mod;
        b>>=1;
    }
    return c;
}

ll gcd(ll x, ll y) {return __gcd(x,y);}
ll lcm(ll x, ll y) {return x/__gcd(x,y)*y;}

int main()
{
	ll k;
	bool b=true;
	string s;
	cin >> s >> k;
	rep(i,SIZE(s)-1){
		if(s[i]!=s[i+1]) b=false;
	}
	if(b) cout << SIZE(s)*k/2 << endl;
	else{
		ll cnt=0,ans=0;
		rep(i,SIZE(s)){
			cnt++;
			if(s[i]!=s[i+1] || i==SIZE(s)-1){
				ans+=cnt/2;
				cnt=0;
			}
		}
		if(s[0]!=s[SIZE(s)-1]) cout << ans*k << endl;
		else{
			ll head=1,tail=1;
			while(s[head-1]==s[head]) head++;
			while(s[SIZE(s)-tail]==s[SIZE(s)-1-tail]) tail++;
			cout << ans*k-(head/2+tail/2-(head+tail)/2)*(k-1) << endl;
		}
	}
	return 0;
}