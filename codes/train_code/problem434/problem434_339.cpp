#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

//template
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(a);i>(b);i--)
#define ALL(v) (v).begin(),(v).end()
typedef long long int ll;
const int inf = 0x3fffffff; const ll INF = 0x1fffffffffffffff; const double eps=1e-12;
void tostr(ll x,string& res){while(x)res+=('0'+(x%10)),x/=10; reverse(ALL(res)); return;}
template<class T> inline bool chmax(T& a,T b){ if(a<b){a=b;return 1;}return 0; }
template<class T> inline bool chmin(T& a,T b){ if(a>b){a=b;return 1;}return 0; }
//template end



int main(){
   int n; scanf("%d",&n);
   vector<int> a(n); rep(i,0,n)scanf("%d",&a[i]);
   int d=*max_element(ALL(a));
   int cnt[110]={}; rep(i,0,n)cnt[a[i]]++;
   rep(i,0,d+1){
      int idx=max(i,d-i);
      if(!cnt[idx]){printf("Impossible\n"); return 0;}
      cnt[idx]--;
   } d=(d+1)/2;
   rep(i,0,d+1)if(cnt[i]){printf("Impossible\n"); return 0;}
   printf("Possible\n");
   return 0;
}