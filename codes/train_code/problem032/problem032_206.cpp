#include <bits/stdc++.h>
using namespace std;
struct Fast {Fast(){std::cin.tie(0);ios::sync_with_stdio(false);cout.precision(20);}} fast;

/* define */
#define FOR(I,X,Y) for(long long (I)=(X);(I)<(Y);(I)++)
#define REP(I,X,Y) for(long long (I)=(Y)-1;(I)>=(X);(I)--)
#define ALL(X) (X).begin(),(X).end()
#define pb push_back
#define COUNT(V,X) (upper_bound((V).begin(),(V).end(),X)-lower_bound((V).begin(),(V).end(),X))
#define debug(x) cerr<<#x<<':'<<x<<endl;
#define DEBUG(v) cerr<<#v<<':';for(auto xXx:v)cerr<<xXx<<' ';cerr<<endl;
#define Yes(X) if(X){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
#define YES(X) if(X){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define ctoi(C) (C-'0')

/* alias */
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vl = vector<long long>;
using vll = vector<vector<long long>>;
using pi = pair<int,int>;
using pl = pair<long long,long long>;
template<typename T> using PQ = priority_queue<T>;
template<typename T> using minPQ = priority_queue<T, vector<T>, greater<T>>;

/* const */
const long long dx[] = {1,0,-1,0};
const long long dy[] = {0,1,0,-1};
const long long dx8[] = {1,1,0,-1,-1,-1,0,1};
const long long dy8[] = {0,1,1,1,0,-1,-1,-1};
const long long dx9[] = {1,1,0,-1,-1,-1,0,1,0};
const long long dy9[] = {0,1,1,1,0,-1,-1,-1,0};
const int INF = 1000000007;
const long long LINF = 1000000000000000007;

/* func */
template <typename T> inline bool chmin(T& a, const T& b) {if (a > b) a = b; return a > b;}
template <typename T> inline bool chmax(T& a, const T& b) {if (a < b) a = b; return a < b;}
long long max(long long x,int y){return max(x,(long long)y);}
long long max(int x,long long y){return max((long long)x,y);}
long long min(long long x,int y){return min(x,(long long)y);}
long long min(int x,long long y){return min((long long)x,y);}

/* liblary */



/* main */

bool check(ll A,ll K){
    while(A || K){
        ll a = A%2,k = K%2;
        if(a > k)return 0;
        A /= 2;
        K /= 2;
    }
    return 1;
}

ll solve(ll K,const vl& A,const vl& B){
    ll ans = 0;
    FOR(i,0,A.size()){
        if(check(A[i],K)){
            ans += B[i];
        }
    }
    return ans;
}

signed main(){
    ll N,K,ans=0;
    cin >> N >> K;
    vl A(N),B(N);
    FOR(i,0,N)cin >> A[i] >> B[i];
    bool bit[30] = {0};
    chmax(ans,solve(K,A,B));
    FOR(i,0,30){
        bit[i] = K%2;
        K /= 2;
    }
    REP(i,0,30){
        if(bit[i]){
            bool tmpbit[30];
            FOR(j,0,30)tmpbit[j] = bit[j];
            FOR(j,0,i)tmpbit[j] = 1;
            tmpbit[i] = 0;
            ll tmpK = 0;
            FOR(j,0,30){
                if(tmpbit[j]){
                    tmpK += (1 << j);
                }
            }
            chmax(ans,solve(tmpK,A,B));
        }
    }
    cout << ans << endl;
}