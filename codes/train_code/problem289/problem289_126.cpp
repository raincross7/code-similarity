#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<cstdio>
#include<cmath>
#include<deque>
#include<numeric>
#include<queue>
#include<stack>
#include<cstring>
#include<limits>
#include<functional>
#include<unordered_set>
#include<iomanip>
#include<cassert>
#include<regex>
#include<bitset>
#include<complex>
#include<chrono>
#define rep(i,a) for(int i=(int)0;i<(int)a;++i)
#define pb push_back
#define eb emplace_back
#define all(x) x.begin(),x.end()
using ll=long long;
constexpr ll mod = 1e9 + 7;
constexpr ll INF = 1LL << 60;

ll gcd(ll n, ll m) {
	ll tmp;
	while (m!=0) {
		tmp = n % m;
		n = m;
		m = tmp;
	}
	return n;
}

ll lcm(ll n, ll m) {
	return abs(n * m) / gcd(n, m);//gl=xy
}
 
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
 
using namespace std;

//ここから

void solve(){
  int m,k;
  cin>>m>>k;
  if((int)pow(2,m)-1<k){
    cout<<-1<<"\n";
  }
  else if(m==0){
    if(k==0)cout<<0<<" "<<0<<"\n";
  }
  else if(m==1){
    if(k==1)cout<<-1<<"\n";
    else {
      cout<<0<<" "<<0<<" "<<1<<" "<<1<<"\n";
    }
  }
  else {
      cout<<k;
      int x=(int)pow(2,m)-1;
      rep(i,pow(2,m)-1){
        if(x==k)--x;
        cout<<" "<<x;
        x--;
      }
      cout<<" "<<k;
      x=0;
      rep(i,pow(2,m)-1){
        if(x==k)++x;
        cout<<" "<<x;
        x++;
      }
  }
}

int main(){
	ios::sync_with_stdio(false);
  cin.tie(0);
	cout<<fixed<<setprecision(15);
  solve();
	return 0;
}