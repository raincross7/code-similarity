#include <numeric>
#include <bits/stdc++.h>
#include <utility>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include <string>
#define ll long long
#define ull unsigned long long
#define make(type,x) type x; cin>>x
#define make2(type,x,y) type x,y; cin>>x>>y
#define fr(x,y) for(long long x=0;x<y;x++)
#define makevec(x,y,n) vector <x> y(n); for(ll i=0;i<n;i++) cin>>y[i]
#define M (ll)1000000007
#define MM (ll) 1e8
#define INF (ll) 1e18

# define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

template <typename T>
T modpow(T base, T exp, T modulus) {
  base %= modulus;
  T result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}
bool sortbysec(const pair <ll,ll> &a,const pair <ll,ll> &b){
    return a.second<b.second;
}

struct cmp {
	bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
		int lena = a.second - a.first + 1;
		int lenb = b.second - b.first + 1;
		if (lena == lenb) return a.first < b.first;
		return lena > lenb;
	}
};


struct c_h {
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        x ^= FIXED_RANDOM;
        return x ^ (x >> 16);
    }
};

ll calcpow(ll x, ll y)
{
    ll temp;
    if(y == 0)
        return 1;
    temp = calcpow(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
    {
        if(y > 0)
            return x * temp * temp;
        else
            return (temp * temp) / x;
    }
}
ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);

}
ll egcd(ll a, ll b, ll &x,ll &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    ll x1;
    ll y1;
    ll g=egcd(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return g;
}


bool isprime(ll a){
bool flag=1;
for(ll i=2;i*i<=a;i++){
    if(a%i==0) {flag=0; break;}
}
return flag;
}
ll dx[2]={1,0};
ll dy[2]={0,1};

int main(){
    IOS;
    make(string,s);
    ll n=s.length();
    for(ll len=n-1;len>=0;len--){
        if(len%2!=0) continue;
        if(s.substr(0,len/2)==s.substr(len/2,len/2)){
            cout<<len<<endl;
            return 0;
        }
    }


    return 0;
}
