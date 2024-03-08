#pragma GCC optimize("Ofast","unroll-loops","omit-frame-pointer","inline") //Optimization flags
#pragma GCC option("arch=native","tune=native","no-zero-upper") //Enable AVX
#pragma GCC target("avx2")  //Enable AVX
#include<bits/stdc++.h>
using namespace std;
#define int ll
#define all(a) a.begin(),a.end()
#define F first
#define S second
#define pb push_back
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp make_pair
 
#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif
 
int mod=1e9+7;
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int mul(int a,int b)
{
    return ((a)*1ll*(b))%mod;
}
 
void add(int &a,int b)
{
    a+=b;
    if(a>=mod)a-=mod;
}
 
int sub(int a,int b){
    a-=b;
    if(a<0){
        a+=mod;
    }
    return a;
}
 
int powz(int a,int b)
{
    int res=1;
    while(b)
    {
        if(b&1){
            res=mul(res,a);
        }
        b/=2;
        a=mul(a,a);
    }
    return res;
}
 
template <typename A, typename B>
istream& operator>>(istream& input,pair<A,B>& x) {
    input>>x.F>>x.S;
    return input;
}
 
template <typename A>
istream& operator>>(istream& input,vector<A>& x) {
    for(auto& i:x)
        input>>i;
    return input;
}
 
template<typename A>
ostream& operator<<(ostream& output,vector<A>& x) {
    for(auto& i:x)
        output<<i<<' ';
    return output;
}
 
const int N=200005;

void solve(){
	int n,L;
	cin>>n>>L;
	vi a(n);
	cin>>a;
	for(int i=0;i<n-1;i++){
		if(a[i]+a[i+1]>=L){
			cout<<"Possible\n";
			for(int j=0;j<i;j++){
				cout<<j+1<<'\n';
			}
			for(int j=n-1;j>i+1;j--){
				cout<<j<<'\n';
			}
			cout<<i+1;
			return;
		}
	}
	cout<<"Impossible";
	
}
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc=1;
    //~cin>>tc;
    for(int _=0;_<tc;_++){
        //~ cout<<"Case #"<<_+1<<": ";
        solve();
        if(_!=tc-1)
        cout<<"\n";
    }
}
