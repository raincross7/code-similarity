#include<bits/stdc++.h>
using namespace std;

#define ALL(a)  (a).begin(),(a).end()
#define ALLR(a)  (a).rbegin(),(a).rend()
#define spa << " " <<
#define lfs <<fixed<<setprecision(10)<<
#define test cout<<"test"<<endl;
#define fi first
#define se second
#define MP make_pair
#define PB push_back
#define EB emplace_back
#define rep(i,n,m) for(ll i = n; i < (ll)(m); i++)
#define rrep(i,n,m) for(ll i = n - 1; i >= (ll)(m); i--)
typedef long long ll;
typedef long double ld;
const ll MOD = 1e9+7;
//const ll MOD = 998244353;
const ll INF = 1e18;
using P = pair<ll, ll>;
template<typename T>
void chmin(T &a,T b){if(a>b)a=b;}
template<typename T>
void chmax(T &a,T b){if(a<b)a=b;}
void pmod(ll &a,ll b){a=(a+b)%MOD;}
void pmod(ll &a,ll b,ll c){a=(b+c)%MOD;}
void qmod(ll &a,ll b){a=(a*b)%MOD;}
void qmod(ll &a,ll b,ll c){a=(b*c)%MOD;}
ll median(ll a,ll b, ll c){return a+b+c-max({a,b,c})-min({a,b,c});}
void ans1(bool x){if(x) cout<<"Yes"<<endl;else cout<<"No"<<endl;}
void ans2(bool x){if(x) cout<<"YES"<<endl;else cout<<"NO"<<endl;}
void ans3(bool x){if(x) cout<<"Yay!"<<endl;else cout<<":("<<endl;}
template<typename T1,typename T2>
void ans(bool x,T1 y,T2 z){if(x)cout<<y<<endl;else cout<<z<<endl;}  
template<typename T>
void debug(vector<vector<T>>v,ll h,ll w){for(ll i=0;i<h;i++)
{cout<<v[i][0];for(ll j=1;j<w;j++)cout spa v[i][j];cout<<endl;}};
void debug(vector<string>v,ll h,ll w){for(ll i=0;i<h;i++)
{for(ll j=0;j<w;j++)cout<<v[i][j];cout<<endl;}};
template<typename T>
void debug(vector<T>v,ll n){cout<<v[0];
for(ll i=1;i<n;i++)cout spa v[i];cout<<endl;};
template<typename T>
vector<vector<T>>vec(ll x, ll y, T w){
  vector<vector<T>>v(x,vector<T>(y,w));return v;}
ll gcd(ll x,ll y){ll r;while(y!=0&&(r=x%y)!=0){x=y;y=r;}return y==0?x:y;}
template<typename T>
void emp(map<T,ll>&m, T x){m.emplace(x,0).first->second++;}



int main(){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  ll res=0,res1=INF,res2=-INF,buf=0;
  bool judge = true;
  ll n;cin>>n;
  vector<ll>x(n);
  vector<ll>tw(32,1);
  rep(i,1,32){
    tw[i]=tw[i-1]*2;
  }
  rep(i,0,n)cin>>x[i];
  ll l,q;cin>>l>>q;
  vector<ll>a(q),b(q);
  rep(i,0,q){
    cin>>a[i]>>b[i];
    a[i]--;b[i]--;
  }
  auto next=vec(n,32,0LL);
  auto prev=vec(n,32,0LL);
  rep(i,0,n){
    next[i][0]=upper_bound(ALL(x),x[i]+l)-x.begin()-1;
    prev[i][0]=lower_bound(ALL(x),x[i]-l)-x.begin();
  }
  rep(i,1,32){
    rep(j,0,n){
      next[j][i]=next[next[j][i-1]][i-1];
      prev[j][i]=prev[prev[j][i-1]][i-1];
    }
  }
  //debug(next,n,5);
  rep(i,0,q){
    ll x=a[i];
    ll ret=0;
    if(a[i]<b[i]){
      while(x<b[i]){
        ll cnt=0;
        while(next[x][cnt]<b[i])cnt++;
        if(cnt>0)cnt--;
        ret+=tw[cnt];
        x=next[x][cnt];
        //cout<<x spa ret spa cnt<<endl;
      }
    }
    else{
      while(x>b[i]){
        ll cnt=0;
        while(prev[x][cnt]>b[i])cnt++;
        if(cnt>0)cnt--;
        ret+=tw[cnt];
        x=prev[x][cnt];

      }
    }
    cout<<ret<<endl;
  }
  return 0;
}