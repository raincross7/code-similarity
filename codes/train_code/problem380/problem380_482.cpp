#include <bits/stdc++.h>
using namespace std;
using str = string;
using ll = long long;
#define REP(i,n) for(int i=0; i<int(n); i++)
#define RREP(i,n) for(int i=int(n)-1; i>=0; i--)
#define FOR(i,f,t) for(int i=int(f); i<=int(t); i++)
#define RFOR(i,f,t) for(int i=int(f); i>=int(t); i--)
#define ALL(vec) (vec).begin(),(vec).end()
#define ASORT(vec) sort(ALL(vec))
#define DSORT(vec) sort(ALL(vec), greater<int>());
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define YES(ans) if(ans) cout<<"YES"<<endl; else cout<<"NO"<<endl;
#define Yes(ans) if(ans) cout<<"Yes"<<endl; else cout<<"No"<<endl;
#define yes(ans) if(ans) cout<<"yes"<<endl; else cout<<"no"<<endl;

int main() {
    int n, m, a;
    cin >> n >> m;
    REP(i, m) {
        cin >> a;
        n -= a;
    }
    if(n<0) cout << -1 << endl;
    else cout << n << endl;
}
