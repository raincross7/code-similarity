// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF 1001001001
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll k;
    cin>>n>>c>>k;
    vector<ll> v(n);
    rep(i,n) {
        cin>>v[i];
    }
  priority_queue<ll, vector<ll>, greater<ll> > q;
    rep(i,n){
        q.push(v[i]);
    }
    ll bus=0;
    while(!q.empty()){
      //  cout<<q.top()<<endl;
        n=q.top();
        q.pop();
        sum=1;
        while(q.top()<=n+k&&sum<c&&!q.empty()){
            q.pop();
            sum++;
        }
        bus++;
    }
    cout<<bus<<endl;

    return 0;
}
