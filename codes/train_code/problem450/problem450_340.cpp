#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int (i)=0;(i)<(n);i++)
#define INF 1001001001
#define LLINF 1001001001001001001
#define MOD 1000000007
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
#define ALL(v) v.begin(), v.end()
typedef long long ll;

int main(){
    int x,n,m=101,ans=0;
    cin >> x >> n;
    int p[n];
    rep(i,n)cin >> p[i];
    int num[100];
    rep(i,102)num[i] = i;

    for(int i=0;i<n;i++){
        num[p[i]]=-1;
    }
    
    
    for(int i=0;i<102;i++){
        if(num[i]!=-1){
            int tem = abs(num[i]-x);
            if(tem<m){
                m=tem;
                ans = i;
            }

        }
    }

    cout << ans << endl;
    return 0;

}
