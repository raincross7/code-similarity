//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>

#define pb push_back
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define ub upper_bound
#define lb lower_bound
#define bit __builtin_popcount
#define memset(x) memset(x,0,sizeof(x))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<vector<int>> matrix;

inline void boost(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

const ll maxn=2e5+123;
const ll inf=1e9+123;
const ll linf=1e18+123;
const ll mod=1e9+7;
const double eps=1e-9;
const double pi=acos(-1);
int dx[8]={0,1,-1,0,1,-1,1,-1};
int dy[8]={1,0,0,-1,1,1,-1,-1};
vector<int>v;
int main(){
    boost();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int m,k;
    cin>>m>>k;
    if((m==1 && k==1) || k>=(1<<m)){
        cout<<"-1";
        return 0;
    }
    if(k==0){
        for(int i=0;i<=(1<<m)-1;i++){
            cout<<i<<" "<<i<<" ";
        }
        return 0;
    }
    cout<<"0 "<<k<<" 0 ";
    for(int i=1;i<=(1<<m)-1;i++){
        if(i!=k){
            cout<<i<<" ";
        }
    }
    cout<<k<<" ";
    for(int i=(1<<m)-1;i>=1;i--){
        if(i!=k){
            cout<<i<<" ";
        }
    }
	exit(0);
}
