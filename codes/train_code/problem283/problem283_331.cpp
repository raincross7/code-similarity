#include <bits/stdc++.h>

#define pb push_back
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,n,s) for(int i=(s);i<(n);i++)
#define rrep(i,n) for(int i=(n-1);i>=0;i--)
#define rreps(i,n,s) for(int i=s;i>=n;i--)
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }

using ll = long long;
using namespace std;
constexpr long long MAX = 5100000;
constexpr long long INF = 1LL << 60;
constexpr int MOD = 1000000007;

int main(){
cin.tie(0);
ios::sync_with_stdio(false);
string s;
cin>>s;
int n=s.size()+1;
vector<ll>a(n,0);

rep(i,n-1){
    if(s[i]=='<'){
        a[i+1]=a[i]+1;
    }
}
rreps(i,0,n-2){
    if(s[i]=='>'){
        a[i]=max(a[i+1]+1,a[i]);
    }
}
ll ans=0;
rep(i,n)ans+=a[i];
cout<<ans<<endl;
return 0;
}