#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0;i<n;i++)
#define rep2(i,a,n) for(int i=a;i<n;i++)
#define been(ix) (ix).begin(),(ix).end()
using namespace std;
typedef long long ll; 
typedef vector<int> vi;
typedef vector<long long> vl;
const ll INFL = 1e18;
const int INF = 1001001001; 
typedef pair<int,int> P;
#define foreach(ix,i) for(auto& (ix) : (i))
typedef long double ld;
const int mod =1000000007;
const double PI = acos(-1);
int main(){
    int n,m;cin>>n>>m;
    map<int,int>ma;
    rep(i,m){
        int a,b;
        cin>>a>>b;
        ma[a]++;ma[b]++;
    }
    bool f=true;
    for(auto x:ma){
        if(x.second%2)f=false;
    }
    if(f)cout<<"YES"<<endl;
    else
    {
         cout<<"NO"<<endl;
    }
    
}