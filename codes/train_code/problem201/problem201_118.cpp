#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
using P = pair<ll,ll>;
const ll mod = 1e9+7;
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define REPS(i,n) for(ll (i)=1;(i)<=(n);(i)++)
#define RREP(i,n) for(ll (i)=(n-1);(i)>=0;(i)--)
#define RREPS(i,n) for(ll (i)=(n);(i)>0;(i)--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define UNIQUE(v) v.erase(unique(ALL(v)),v.end());

template<class T> inline void chmin(T& a, T b){
    if (a > b){
        a = b;
    }
}

template<class T> inline void chmax(T& a, T b){
    if (a < b){
        a = b;
    }
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(10);
    int N;
    cin >> N;
    vector<pair<ll,ll>> A(N);
    REP(i,N){
        ll As,Bs;
        cin >> As >> Bs;
        A[i] = mp(As+Bs,As);
    }
    sort(ALL(A),greater<>());
    ll answer = 0;
    REP(i,N){
        if(i%2 == 0){
            answer += A[i].S;
        }else{
            answer -= A[i].F - A[i].S;
        }
    }
    cout << answer << "\n";
}