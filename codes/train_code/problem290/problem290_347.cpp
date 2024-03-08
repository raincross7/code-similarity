#include "bits/stdc++.h"
using namespace std;
#define repr(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repr(i,0,n)
#define reprrev(i,a,b) for(int i=(int)(b)-1;i>=(int)(a);i--)
#define reprev(i,n) reprrev(i,0,n)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define mp make_pair
#define mt make_tuple
#define MOD 1000000007
#define PI 3.1415926535
typedef long long ll;
typedef pair<int, int> Pi;
typedef pair<ll, ll> Pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<Pi> vPi;
typedef vector<Pll> vPll;
typedef vector<vector<int>> vvi;
typedef vector<vector<bool>> vvb;
typedef vector<vector<ll>> vvll;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<double>> vvd;
typedef vector<vector<Pi>> vvPi;
typedef priority_queue<int, vector<int>, greater<int>> pqli;
typedef priority_queue<ll, vector<ll>, greater<ll>> pqlll;
typedef priority_queue<Pi, vector<Pi>, greater<Pi>> pqlP;
string YN(bool y) { return (y?"YES":"NO"); }
string yn(bool y) { return (y?"Yes":"No"); }
string ON(bool y) { return (y?"OK":"NG"); }
int main(void)
{
	ll n, m;

	cin>>n>>m;

	ll ansx=0, ansy=0;

	vll x(n), y(m);

	rep(i, n) cin>>x[i];

	rep(i, m) cin>>y[i];

	rep(i, n-1){
		ll xc=(ll)(n-1-i)*(ll)(i+1);
		ansx+=(xc*(x[i+1]-x[i]))%MOD;
		ansx=(ansx)%MOD;
	}

	rep(i, m-1){
		ll yc=(ll)(m-1-i)*(ll)(i+1);
		ansy+=(yc*(y[i+1]-y[i]))%MOD;
		ansy=(ansy)%MOD;
	}
	cout<<(ansx*ansy)%MOD<<endl;
}
