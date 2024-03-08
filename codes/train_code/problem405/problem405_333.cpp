#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define P pair<ll,ll>
#define FOR(I,A,B) for(ll I = ll(A); I < ll(B); ++I)
#define FORR(I,A,B) for(ll I = ll((B)-1); I >= ll(A); --I)
#define TO(x,t,f) ((x)?(t):(f))
#define SORT(x) (sort(x.begin(),x.end())) // 0 2 2 3 4 5 8 9
#define POSL(x,v) (lower_bound(x.begin(),x.end(),v)-x.begin()) //xi>=v  x is sorted
#define POSU(x,v) (upper_bound(x.begin(),x.end(),v)-x.begin()) //xi>v  x is sorted
#define NUM(x,v) (POSU(x,v)-POSL(x,v))  //x is sorted
#define REV(x) (reverse(x.begin(),x.end())) //reverse
ll gcd(ll a,ll b){if(a%b==0)return b;return gcd(b,a%b);}
ll lcm(ll a,ll b){ll c=gcd(a,b);return ((a/c)*(b/c)*c);}
#define NEXTP(x) next_permutation(x.begin(),x.end())
const ll INF=ll(1e18)+ll(7);
const ll MOD=1000000007LL;
#define out(a) cout<<fixed<<setprecision((a))
#define YesNo(a) cout<<TO((a),"Yes","No")<<endl;



int main(){
  ll N;
  cin >> N;
  vector<ll> pl,mi,ansx,ansy;
  FOR(i,0,N){
    ll a;
    cin >> a;
    if(a>=0){
      pl.push_back(a);
    }else{
      mi.push_back(a);
    }
  }
  SORT(pl);
  SORT(mi);
  queue<ll> pq,mq;
  if(pl.size() == N){
    FOR(i,1,N-1) pq.push(pl[i]);
    mq.push(pl[0]-pl[N-1]);
    ansx.push_back(pl[0]);
    ansy.push_back(pl[N-1]);
  }else if(mi.size()==N){
    FOR(i,1,N-1) mq.push(mi[i]);
    pq.push(mi[N-1]-mi[0]);
    ansx.push_back(mi[N-1]);
    ansy.push_back(mi[0]);
  }else{
    FOR(i,0,pl.size()) pq.push(pl[i]);
    FOR(i,0,mi.size()) mq.push(mi[i]);
  }

  while(pq.size()+mq.size() > 1){
    int p = pq.front();
    int m = mq.front();
    pq.pop();
    mq.pop();
    if(pq.size()==0){
      pq.push(p-m);
      ansx.push_back(p);
      ansy.push_back(m);
    }else{
      mq.push(m-p);
      ansx.push_back(m);
      ansy.push_back(p);
    }
  }
  cout << pq.front() << endl;
  FOR(i,0,ansx.size()){
    cout << ansx[i] << " " << ansy[i] << endl;
  }
}