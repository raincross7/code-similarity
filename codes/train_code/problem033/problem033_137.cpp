#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define abs(a) max((a),-(a))
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define repe(i,n) rep(i,(n)+1)
#define per(i,n) for(int i=(int)(n)-1;i>=0;i--)
#define pere(i,n) rep(i,(n)+1)
#define all(x) (x).begin(),(x).end()
#define SP <<" "<<
#define RET return 0
#define MOD 1000000007
#define INF 1000000000000000000

typedef long long LL;
typedef long double LD;

int main(){
  while(1){
    int n;
    cin >> n;
    if(n==0) return 0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    sort(all(a));
    int ans=1000000000;
    for(int i=0;i<n-1;i++){
      ans=min(ans,a[i+1]-a[i]);
    }
    cout << ans << endl;
  }
  return 0;
}

