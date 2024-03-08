#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0;i<int(N);++i)
#define rep1(i,N) for(int i=1;i<int(N);++i)
#define all(a) (a).begin(),(a).end()		 //sort(all(vi S)) sort(all(string S))
#define print(v) { cerr<<#v<<": [ "; for(auto _ : v) cerr<<_<<", "; cerr<<"]"<<endl; }
#define printpair(v) { cerr<<#v<<": [ "; for(auto _ : v) cerr<<"{"<<_.first<<","<<_.second<<"}"<<", "; cerr<<"]"<<endl; }

using P = pair<int, int>;		//P.first, P.second
typedef long long ll;
typedef vector<int> vi;
typedef set<int> seti;
typedef vector<string> vs;

const int MOD = 1e9+7;
const int INF = 1e9;

int main() {
    int N;
    string S;
    cin>>N>>S;
    ll ans = 1;
    ll K =  0;
    for(auto c: S){
        if((c == 'W') == (K%2 == 0)){
            K %= MOD;
            ans *= K;
            ans %= MOD;
            if((--K)<0)break;
        }
        else{
            K++;
            K %= MOD;
        }
    }
    if(K!=0){
        cout<<0<<endl;
        return 0;
    }
    rep1(i,N+1){
        ans *= i;
        ans %= MOD;
    }
    cout<<ans<<endl;

}