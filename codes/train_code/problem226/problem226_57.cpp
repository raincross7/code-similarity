#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
// #define USE_LLONG_AS_INT
#ifdef USE_LLONG_AS_INT
#define int long long
#define inf (1ll<<60)
#else
#define inf (1<<30)
#endif
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,a,b) for(int i=a;i<b;i++)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,n) for(int i=(n)-1;i>=0;i--)
#define vi vector<int>
#define vvi vector<vi>
#define vs vector<string>
#define pb push_back
#define pi pair<int,int>
#define vp vector<pair<int,int>>
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define fi first
#define se second
#define MEMSET(a) memset(a,0,sizeof(a))
#define Yes(f) cout<<(f?"Yes":"No")<<endl
#define yes(f) cout<<(f?"yes":"no")<<endl
#define YES(f) cout<<(f?"YES":"NO")<<endl
#define SORT(v) sort(all(v))
#define RSORT(v) sort(all(v), greater<int>())

using namespace std;

const int mod=1e9+7;
const string sp=" ";

void run();

void init() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout<<fixed<<setprecision(12);
}

signed main(){
    // init();
    run();
    return 0;
}

void run(){
    int n;
    cin>>n;
    int l=0,r=n-1;
    string ls,rs;
    cout<<l<<endl;
    cin>>ls;
    if(ls=="Vacant")return;
    cout<<r<<endl;
    cin>>rs;
    if(rs=="Vacant")return;
    while(true){
        int m=(l+r)/2;
        cout<<m<<endl;
        string s;
        cin>>s;
        if(s=="Vacant")return;
        if(s==ls&&(m-l)%2){
            r=m;
            rs=s;
        }
        else if(s!=rs&&(r-m)%2==0){
            l=m;
            ls=s;
        }
        else if(s==rs&&(r-m)%2){
            l=m;
            ls=s;
        }
        else {
            r=m;
            rs=s;
        }
    }
}