#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <math.h>
#include <complex>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <bitset>
#include <functional>
#include <assert.h>
using ll=long long;
#define int ll
#define rng(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,b) rng(i,0,b)
#define gnr(i,a,b) for(int i=int(b)-1;i>=int(a);i--)
#define per(i,b) gnr(i,0,b)
#define eb emplace_back
#define all(x) x.begin(),x.end()
#define SZ(x) ((int)x.size())
#define fi first
#define se second
const int INF = 1e15;
using namespace std;

template<class T> using vc=vector<T>;
template<class T> using vvc=vc<vc<T>>;

using pi=pair<int,int>;
using vi=vc<int>;

template<class T>
inline bool chmax(T &a,T b){if(a<b){a=b;return true;}return false;}
template<class T>
inline bool chmin(T &a,T b){if(a>b){a=b;return true;}return false;}

signed main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout<<fixed<<setprecision(20);

    int N; cin >> N;
    int A[N],B[N];
    rep(i,N){
        if(!i){A[i]=1; B[N-i-1]=1;}
        else {
            A[i]=A[i-1]+20002;
            B[N-i-1]=B[N-i]+20002;
        }
    }
    rep(i,N){
        int a; cin >> a;
        a--;
        A[a]+=i;
    }
    rep(i,N) cout << A[i] << " ";
    cout << endl;
    rep(i,N) cout << B[i] << " ";
    cout << endl;
}