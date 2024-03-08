#include <bits/stdc++.h>
using namespace std;
const long double PI = acos(-1);
typedef long long ll;
typedef pair<int64_t,int64_t> pll;
int dx[]={1,-1,0,0,1,-1,1,-1};
int dy[]={0,0,1,-1,1,-1,-1,1};
#define INF (2147483647)
#define mod (1000000007)
#define limit (7368791)
#define rep(i,a,b) for (int64_t i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
#define ALL(a) begin(a),end(a)
#define sz(s) (s).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second

string temp;
int n,v[100010];
void read(int x){
    cout<<x<<endl;
    cin>>temp;
    if(temp=="Vacant")exit(0);
    if(temp=="Male")v[x]=1;
    else v[x]=2;
}

void solve(){
    cin>>n;read(0);read(n-1);
    int l=0,r=n-1;
    REP(i,20){
        int m=(l+r)/2;
        read(m);
        if((m+l)%2==(v[m]+v[l])%2)l=m;
        else r=m;
    }
}
int main()
{
    cin.tie(0);
	ios::sync_with_stdio(false);
    solve();
    return 0;
}
