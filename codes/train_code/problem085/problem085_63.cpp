#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define FORR(i,a,b)for(ll i=(a);i<=(b);i++)
#define repR(i,n) for(ll i=n;i>=0;i--)
#define all(v)(v).begin(),(v).end()
#define rall(v)(v).rbegin(),(v).rend()
#define F first
#define S second
#define pb push_back
#define pu push
#define COUT(x) cout<<(x)<<endl
#define PQ priority_queue<ll>
#define PQR priority_queue<ll,vector<ll>,greater<ll>>
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl
#define mp make_pair
#define maxs(x,y) (x = max(x,y))
#define mins(x,y) (x = min(x,y))
#define sz(x) (int)(x).size()
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const ll MOD = 1000000007LL;
const ll INF = 1LL << 60;
using vll = vector<ll>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vvll = vector<vll>;
using vstr = vector<string>;
using pll = pair<ll, ll>;
using vc = vector<char>;
using vvc = vector<vc>;
ll dx[4]={0,1,0,-1};
ll dy[4]={1,0,-1,0};
map<ll,ll> insuu;
void prime_factor(ll n){
    ll k=n;
	for(ll i=2;i*i<=n;i++){
	    while(k%i==0){
	        insuu[i]++;
	        k/=i;
	    }
	}
	if(k!=1) insuu[k]++;
	return ;
}
int main(){
  ll n;
  cin>>n;
  for(int i=2;i<=n;i++){
    prime_factor(i);
  }
  for(auto p:insuu){
    insuu[p.F]++;
  }
  ll t75=0;
  ll t25=0;
  ll t3=0;
  ll t5=0;
  ll t15=0;
  ll ans=0;
  for(auto p:insuu){
    if(p.S>=75) t75++;
     if(p.S>=25) t25++;
     if(p.S>=15) t15++;
     if(p.S>=5) t5++;
     if(p.S>=3) t3++;
  }
  ans=t75+t25*(t3-1)+(t5-1)*t15+t5*(t5-1)*(t3-2)/2;
  COUT(ans);
}