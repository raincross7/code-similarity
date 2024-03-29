#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <climits>
#include <cmath>
#include <map>
#include <queue>
#include <iomanip>
#include <set>
using namespace std;

#define rep(i,n) for(ll (i)=0;(i)<(n);(i)++ )
#define repf(i,m,n) for(ll (i)=m;(i)<n;(i)++)
#define all(v) (v).begin(), (v).end()
#define ll long long
#define vec(name,num) vector<ll> name((num),0);
#define op(i) cout<<(i)<<endl;
#define opf(i) cout<<fixed<<setprecision(10)<<(i)<<endl;
#define ip(i) cin>>(i);
#define opN cout<<"No"<<endl;
#define opY cout<<"Yes"<<endl;
#define opP cout<<"Possible"<<endl;
#define opI cout<<"Impossible"<<endl;
#define mat(name,fnum,snum); vector<vector<ll>> name((fnum),vector<ll>((snum),0));
#define matC(name,fnum,snum); vector<vector<char>> name((fnum),vector<char>((snum),0));
#define debugP int debug_point; cin>>debug_point;
#define FI first
#define SE second
const ll MOD= 1e9 + 7;



struct  Combination{
  vector<ll> con;
  vector<ll> coni;
  ll n;
  ll mpow(ll x, ll n){
    ll ans = 1;
    while(n != 0){
        if(n&1) ans = ans*x;
        x = x*x;
        n = n >> 1;
    }
    return ans;
  }

  Combination(ll input){
    n=input;
    con.push_back(1);
    coni.push_back(1);
    rep(i,n){
      con.push_back(con[i]*(i+1));
      coni.push_back(coni[i] * mpow(i+1,MOD-2));
    }
  }
  
  ll comb(ll N, ll k){
    if(N == 0 && k == 1)return 1;
    if(N < k || k < 0)return 0;
    ll tmp=con[N]*coni[k];
    return tmp*coni[N-k];
  }
};

//
void solve(std::string A){
  ll cnt=0;
  ll t=0;
  //Combination C(A.size());
  rep(i,26){
    rep(j,A.size()){
      if(A[j]-'a'==i){
        t++;
      }
    }
    
    cnt+=t*(t-1)/2;
    t=0;
  }
  op(A.size()*(A.size()-1)/2-cnt+1);
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    std::string A;
    std::cin >> A;
    solve(A);
    return 0;
}
