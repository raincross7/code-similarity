#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vs vector<string>
#define pb push_back
#define P pair<int,int>
#define vp vector<P>
#define PP pair<P,int>
#define vpp vector<PP>
#define fi first
#define se second
#define INF (1<<30)
#define MOD 1000000007
#define REP(i,n) for(int i=0;i<n;i++)
#define REPR(i,n) for(int i=n;i>=0;i--)
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define all(x) (x).begin(),(x).end()
int dx[]={-1,0,1,-1,0,1,-1,0,1},dy[]={-1,-1,-1,0,0,0,1,1,1};
signed main(){
    int h,w,n;
    cin>>h>>w>>n;
    map<P,int> ma;
    REP(i,n){
        int a,b;
        cin>>a>>b;
        REP(j,9){
            if(2<=a+dx[j]&&a+dx[j]<=h-1&&2<=b+dy[j]&&b+dy[j]<=w-1){
                ma[P(a+dx[j],b+dy[j])]++;
            }
        }
    }
    vi ans(10);
    int p=(h-2)*(w-2);
    for(auto itr:ma){
        cerr<<itr.fi.fi<<" "<<itr.fi.se<<":"<<itr.se<<endl;
        ans[itr.se]++;
    }
    FOR(i,1,10){
        p-=ans[i];
    }
    ans[0]=p;
    REP(i,10){
        cout<<ans[i]<<endl;
    }
    return 0;
}