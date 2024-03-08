#include<bits/stdc++.h>
using namespace std;
#define ALL(obj) (obj).begin(),(obj).end()
#define RALL(obj) (obj).rbegin(),(obj).rend()
#define REP(i, n) for(int i=0;i<(n);++i)
#define RANGE(i, a, b) for(int i=(a);i<(b);++i)
#define RREP(i, n) for(int i=(n)-1;i>= 0;--i)

#define endl '\n'
#define pb push_back
#define eb emplace_back
#define pque priority_queue
#define umap unordered_map
#define uset unordered_set
#define BIG 2000000000
#define VERYBIG 1000000000000000ll
#define PI 3.141592653589793238
#define dcout cout<<fixed<<setprecision(50)
#define _popcnt __builtin_popcount

const long long dx[]={1,0,-1,0,1,1,-1,-1}, dy[]={0,-1,0,1,1,-1,1,-1};
const long long MOD = 1e9+7;

// typedef long long ll;
#define int long long
#define double long double

template<typename T> inline T GCD(T a,T b){T c;while(b!=0){c=a%b;a=b;b=c;}return a;}
template<typename T> inline T LCM(T a,T b){T c=GCD(a,b);a/=c;return a*b;}
template<typename T> inline T nCr(T a,T b){T i,r=1;for(i=1;i<=b;i++){r*=(a+1-i);r/=i;}return r;}
template<typename T> inline T nHr(T a,T b){return nCr(a+b-1,b);}
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}

typedef pair<int, int> INTP;
typedef vector<int> INTV;
struct edge2 {int to, cost;};
struct edge3 {int from, to, cost;};

signed main(void){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M, V, P, A[100000]; cin >> N >> M >> V >> P;
  REP(i, N) cin >> A[i];
  sort(A, A+N);

  int left = -1, right = N-P;
  while(right-left > 1){
    int mid = (left+right) / 2;
    bool ok = 1;
    if(A[mid]+M < A[N-P]) ok &= 0;
    int remain = M*(V-mid-1-P+1);
    int sum = 0;
    for(int i = mid+1; i <= N-P; i++){
      sum += min(M, A[mid]+M-A[i]);
    }
    if(remain > sum) ok &= 0;

    if(ok) right = mid;
    else left = mid;
  }
  cout << N - right << endl;
}