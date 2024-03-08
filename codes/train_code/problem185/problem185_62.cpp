#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <string.h>
#include <iomanip>
#include <ctype.h>

#define ll          long long int
#define ull         unsigned long long int
#define pb          push_back
#define pii         pair<int,int>
#define F           first
#define S           second
#define vi          vector<int>
#define vli          vector<ll>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define M_PI        3.14159265358979323846
#define mp          make_pair
#define sz(x)       (int)x.size()
//#define hell        1000000007
#define matrix      vector<vector<ll>>
#define forn(i,a,b)  for(int i=a;i<b;i++)
#define eps 0.000000001
#define all(a)      (a).begin(),(a).end()
const long long INF = (long long) 1e7+1;
const long long mod = (long long) 998244353;
const long long hell = (long long) 1000000007;

using namespace std;
#include <stdio.h>

ll power(ll x,ll y)
{
  ll res=1;
  while(y>0)
  {
    if(y%2) res=(x%hell*res%hell)%hell;
    x=(x%hell*x%hell)%hell;
    y=y/2;
  }
  return res;
}

ll modinv(ll x){
  return power(x,hell-2);
}

void solve();


void fastIO() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

int main(){
   fastIO();
    solve();
}
//void sieve();
ll pw(ll k,ll x);
ll gcd(ll x,ll y);

/*
  For freq or prime factors

for(auto pri:prime){
  while(k%pri==0){
    pcnt[pri]++;
    k/=pri;
  }
}*/

bool issafe(int x,int y,int n,int m){
  return (x>=0 && y>=0 && x<n && y<m);
}
ll lcm(ll a,ll b){
    return (a%hell*modinv(gcd(a,b))%hell)%hell*(b%hell);
}


void solve(){
  int test;
  //cin>>test;
  test=1;
  
  while(test--){
        int n;
        cin>>n;
        
        int a[2*n];
        forn(i,0,2*n)
        cin>>a[i];
        
        sort(a,a+2*n);
        int ans=0;
        
        for(int i=0;i<2*n;i+=2)
        ans+=a[i];
        
        cout<<ans;
  }    
}    

    




///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

ll gcd(ll a,ll b)
{
    while( b != 0)
	{
		ll  t = b;
		b= a %t;
		a = t;
	}
	return a;
}


ll pw(ll k,ll x){
  if(x==0)
  return 1;
  if(x&1)
  return ((pw(k,x-1))*k);
  else
  return ((pw(k,x/2))*(pw(k,x/2)));
}
