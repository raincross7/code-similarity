#pragma GCC optimize("O3")
#include<bits/stdc++.h> 
using namespace std;
using ll=long long;
using P=pair<int,int>;
template<class T> using V=vector<T>; 
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
const ll inf=(1e18);
const ll mod=1000000007;
ll gcd(ll a,ll b) {return b ? gcd(b,a%b):a;}
ll lcm(ll c,ll d){return c/gcd(c,d)*d;}
struct __INIT{__INIT(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(15);}} __init;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
V<string> dp(10005,"");
int main(){
 V<int> match={0,2,5,5,4,5,6,3,7,6};
 int n,m;
 cin>>n>>m;
 V<int> a(m);
 for(int i=0;i<m;i++)cin>>a[i];
 sort(all(a),greater<int>());
 for(int i=0;i<m;i++){
      for(int j=n;j>=0;j--){
          if(j-match[a[i]]>=0){
              if(j!=n&&dp[j].size()==0)continue;
              string tmp=dp[j];
              tmp+=(char)a[i]+'0';
              if(tmp.size()>dp[j-match[a[i]]].size())dp[j-match[a[i]]]=tmp;
              else if(tmp.size()==dp[j-match[a[i]]].size()){
                  int k=tmp.size();
                  while(--k>=0){
                      if(tmp[k]>dp[j-match[a[i]]][k]){
                          dp[j-match[a[i]]]=tmp;
                          break;
                      }
                  }
              }
          }
      }
 }
 cout<<dp[0]<<endl;
}