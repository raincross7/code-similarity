#include <bits/stdc++.h>
using namespace std;
#define mp(a,b) make_pair(a,b)
#define ff first
#define setp(a) setprecision(a)<<fixed
#define ss second
#define fori(v) for(ll i=0; i<v; i++)
#define forj(v) for(ll j=0; j<v; j++)
#define fork(v) for(ll k=0; k<v; k++)
#define forl(v) for(ll l=0; l<v; l++)
#define fort(v) for(ll t=0; t<v; t++)
#define forz(v) for(ll z=0; z<v; z++)
#define ll long long
#define ld long double
#define MAX (int)(7*pow(10,2) + 10)
#define pb(a) push_back(a)
// #define cout out
// #define cin in
ll inf = pow(10,9);
ll INF = inf;
ll modulo = inf;
double eps = 1e-10;
ifstream in;
ofstream out;
 
 
void deal(){
	ll a, b, c;
	cin>>a>>b>>c;
	string ans[2] = {"No", "Yes"};
	cout<<ans[((a==b)&&(b==c))];
}
 
 
 
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	deal();
}
 
 
 
/*
	
*/