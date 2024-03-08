/*
　　　∫ ∫ ∫
　　　ノヽ
　　（＿　 ）
　（＿　　　 ）
（＿＿＿＿＿＿ ）
　ヽ(´･ω･)ﾉ　
　　 |　 /
　　 UU
*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
using P = pair<ll, ll>;
typedef vector<int> vi;
const int MOD = (int)1e9 + 7;
const ll INF = 1LL << 62;
const int inf = 1<<30;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i,s,n) for (int i = s; i < (n); i++)
#define ALL(obj) (obj).begin(), (obj).end() //コンテナじゃないと使えない!!
#define debug(x) cerr << #x << ": " << x << "\n";
#define mp make_pair
template <typename T>
ostream& operator<<(ostream& os, vector<T> &V){
    int N = V.size();
    REP(i,N){
        os << V[i];
        if (i!=N-1) os << " ";
    }
    os << "\n";
    return os;
}
template <typename T>
ostream& operator<<(ostream& os, pair<T,T> const&P){
    os << "(";
    os << P.first;
    os << " ";
    os << P.second;
    os << ")";

    return os;
}
template <typename T>
ostream& operator<<(ostream& os, set<T> &S){
    auto it=S.begin();
    while(it!=S.end()){
        os << *it;
        os << " ";
        it++;
    }
    os << "\n";
    return os;
}
template <typename T>
ostream& operator<<(ostream& os, deque<T> &q){
    for(auto it=q.begin();it<q.end();it++){
        os<<*it;
        os<<" ";
    }
     os<<endl;
    return os;
}
vector<pair<int,int>> dxdy = {mp(0,1),mp(1,0),mp(-1,0),mp(0,-1)};
//fixed<<setprecision(10)<<ans<<endl;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N,K;
    cin >> N >> K;
    vector<pair<ll,ll>> A;
    ll a,b;
    REP(i,N) cin >> a >> b, A.emplace_back(a,b);
    sort(ALL(A));
    
    ll ans=INF;
    ll x,y;
    for(int i=0;i<N;i++){
        for(int j=i+K-1;j<N;j++){
            // cout << "i:" << i << " j:" << j << "-----------"<<endl;
            vector<pair<ll,ll>> B;
            for(int k=i;k<=j;k++){
                B.emplace_back(A[k].second,A[k].first);
            }
            sort(ALL(B));
            // cout << "::::" << (A[j].first-A[i].first)*(B[K-1].first-B[0].first) << endl;
            // debug(j-i-K)
            for(int l=0;l<=j-i-K+1;l++){
                int r = l+K-1;
                ll bot=INF,top=-INF;
                REP(idx,K){
                    chmin(bot, B[l+idx].second);
                    chmax(top, B[l+idx].second);
                }
                // debug(j)
                // debug(B)
                // debug((top-bot)*(B[l+K-1].first-B[l].first))
                // cout << l << " " << K << endl;
                // cout << top << " " << bot << " (" << B[l+K-1].first <<","<< l+K-1 << ") " << B[l].first << endl;
                chmin(ans, (top-bot)*(B[l+K-1].first-B[l].first));
            }
            // cout << B;
        }
    }
    // debug(INF)

    cout << ans << endl;
}