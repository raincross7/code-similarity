#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) for(int i=0;i<(n);++i)
#define REPR(i,n) for(int i=n;i>=0;i--)
#define ALL(v) (v.begin(),v.end())
#define COUT(x) cout<<(x)<<'\n'

int main(){
    int n;
    cin >> n;
    string s,t,tes;
    cin >> s >> t;
    REP(i,n){
        tes = s.substr(i,n-i);
        if(tes==t.substr(0,n-i))break;
        tes="";
    }
    COUT(2*n-tes.size());
    return 0;
}
