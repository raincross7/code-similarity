#include<bits/stdc++.h>
//ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//clock_t start=clock();clock_t end=clock();cout<<(double)(end-start)/CLOCKS_PER_SEC<<endl;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef pair<int,int> pii;
typedef pair<pii,int> ppii;
typedef pair<int,pii> pipi;
typedef pair<ll,ll> pll;
typedef pair<pll,ll> ppll;
typedef pair<ll,pll> plpl;
typedef tuple<ll,ll,ll> tl;
typedef pair<double,double> pdd;
ll mod=1000000007;
ll mod2=998244353;
ll mod3=1000003;
ll mod4=998244853;
ll mod5=1000000009;
ll inf=1LL<<60;
double pi=3.141592653589793238462643383279L;
double eps=1e-9;
#define rep(i,m,n) for(ll i=m;i<n;i++)
#define rrep(i,n,m) for(ll i=n;i>=m;i--)
#define srep(itr,st) for(auto itr=st.begin();itr!=st.end();itr++)
#define mrep(itr,mp) for(auto itr=mp.begin();itr!=mp.end();itr++)
#define Max(a,b) a=max(a,b)
#define Min(a,b) a=min(a,b)
int dh[4]={1,-1,0,0};
int dw[4]={0,0,1,-1};
int ddh[8]={-1,-1,-1,0,0,1,1,1};
int ddw[8]={-1,0,1,-1,1,-1,0,1};
ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    if(b==0)return a;
    if(a%b==0)return b;
    return gcd(b,a%b);
}
ll Pow(ll n,ll k){
    ll ret=1;
    ll now=n;
    while(k>0){
        if(k&1)ret*=now;
        now*=now;
        k/=2;
    }
    return ret;
}
ll beki(ll n,ll k,ll md){
  ll ret=1;
  ll now=n;
  while(k>0){
    if(k%2==1){
      ret*=now;
      ret%=md;
    }
    now*=now;
    now%=md;
    k/=2;
  }
  return ret;
}
ll gyaku(ll n,ll md){
  return beki(n,md-2,md);
}
ll popcount(ll n){
    ll ret=0;
    ll u=n;
    while(u>0){
        ret+=u%2;
        u/=2;
        
    }
    return ret;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll k,n;cin>>n>>k;
    vector<pll> w;
    ll ma[n+1];
    fill(ma,ma+n+1,-inf);
    rep(i,0,n){
        ll t,d;cin>>t>>d;
        Max(ma[t],d);
        w.push_back({d,t});
    }
    ll sum=0;
    deque<ppll> dq;
    bool used[n+1];
    fill(used,used+n+1,false);
    sort(w.begin(),w.end(),greater<pll>());
    ll syu=0;
    rep(i,0,k){
        
        sum+=w[i].first;
        if(used[w[i].second]==false){
            syu++;
            dq.push_back({w[i],1});
        }
        else dq.push_back({w[i],0});
        used[w[i].second]=true;
    }
    //cout<<sum<<" "<<syu<<endl;
    priority_queue<ll> q;
    rep(i,1,n+1){
        if(used[i]==false&&ma[i]>=0){
            q.push(ma[i]);
        }
    }
    //cout<<sum<<" "<<syu<<" "<<q.size()<<" "<<endl;
    ll ans=sum+syu*syu;
    for(;;){
        if(q.size()==0)break;
        int y=0;
        while(dq.size()>0){
            ppll p=dq.back();dq.pop_back();
            if(p.second==1)continue;
            sum-=p.first.first;
            y=1;
            break;
        }
        if(y==0)break;
        ll r=q.top();q.pop();
        syu++;
        sum+=r;
       // cout<<sum<<endl;
        Max(ans,sum+syu*syu);
    }
    cout<<ans<<endl;
}








