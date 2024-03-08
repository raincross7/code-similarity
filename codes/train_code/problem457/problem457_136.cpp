#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fo(i,s,e) for( i=s;i<e;i++)
#define rfo(i,s,e) for(i=s;i>e;i--)
#define LL long long int 
const LL MOD=1e9+7;
#define pb push_back
#define pob pop_back()
#define sp " "
#define ff first
#define ss second
//            When something is important enough, you do it even if the odds are not in your favor.

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // code goes here
    int t=1;//cin>>t;
    while(t--){
      LL n,m,i;cin>>n>>m;
      std::vector<std::vector<LL>> v(m+1);
      fo(i,0,n){
        LL a,b;cin>>a>>b;
        if(a>m) continue;
        v[a].pb(b);
      }
      LL ans=0;
      priority_queue<LL> q;
      fo(i,1,m+1){
        for(auto x:v[i]){
          q.push(x);
        }
        if(q.size()){
          ans+=q.top();q.pop();
        }
      }
      cout<<ans;
    }
    return 0;
}