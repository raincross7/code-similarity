// lcmとか__builtin_popcountとかはg++ -std=c++17 default.cppみたいなかんじで

// -fsanitize=undefinedでオーバーフロー検出
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

    ll a,b,c,d,m,n,maxi=0,f=0,mini=INF,sum=0;
    string str;
    ll k;
    string l,s;
    cin>>str>>s;
    for(ll i=str.length()-s.length();i>=0;i--){
        f=0;
        for(ll j=0;j<s.length();++j){
            if(str[j+i]==s[j]||str[j+i]=='?'){
            }else{
                f=1;
                break;
            }
        }
        if(f==0){
            for(ll j=0;j<s.length();++j){
            str[j+i]=s[j];
            }
            f=2;
            break;
        }
    }
    rep(i,str.length()){
        if(str[i]=='?') str[i]='a';
    }
            if(f!=2) cout<<"UNRESTORABLE"<<endl;
        else cout<<str<<endl;
    return 0;
}