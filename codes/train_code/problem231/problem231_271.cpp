#include<bits/stdc++.h>
#include<cctype>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);i++)
#define reps(i,n) for (int i=1;i<=(n);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rreps(i,n) for (int i=(n);i>0;i--)
#define all(v) (v).begin(),(v).end()
#define pi 3.1415926535897932384
#define E9 1000000000
#define eps 1e-4
#define pii pair<int,int>
template<class T> inline bool chmin(T &a, T b) {if (a>b) {a = b; return 1;} return 0;};
template<class T> inline bool chmax(T &a, T b) {if (a<b) {a = b; return 1;} return 0;};
typedef long long int ll;
const long long INF = 1LL << 60;


int main(){
  int A, B, C; cin >> A >> B >> C;
  int K; cin >> K;

  int cnt = 0;
  while (B<=A) {
    B *= 2;
    cnt++;
  }
  while (C<=B) {
    C*=2;
    cnt++;
  }
  if (cnt<=K) cout << "Yes" << endl;
  else cout << "No" << endl;



  // cout << fixed << setprecision(10);
  
  return 0;
}
