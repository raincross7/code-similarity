// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

#include <bits/stdc++.h>
#define mod 1000000007
#define INF LLONG_MAX
#define ll long long
#define ln cout<<endl
#define Yes cout<<"Yes"<<endl
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define No cout<<"No"<<endl
#define REP(i,m,n) for(ll i=(ll)(m);i<(ll)(n);i++)
#define rep(i,n) REP(i,0,n)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
using namespace std;
ll dx[4]={1,0,-1,0};
ll dy[4]={0,1,0,-1};


int main() {
    cin.tie(0);
   	ios::sync_with_stdio(false);
    ll n;
    ll a,b;
    ll k,t;
    string str;
    ll h;
    char c,ko;
    cin>>a>>b;
    if(a%b==0){
        cout<<-1<<endl;
        return 0;
    }
    for(ll i=a;i<10e18+1;i+=a){
        if(i%b){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;;
}