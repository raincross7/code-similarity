// #pragma GCC optimize("no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// #pragma vector temporal
// #pragma simd
// #pragma GCC diagnostic ignored "-W"

#include<cassert>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<iostream>
#include<iomanip>
#include<sstream>
#include<deque>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<vector>
#include<utility>
#include<functional>
#include<complex>
#include<climits>

// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

#define ll long long
#define ld long double
#define X first
#define Y second
#define pb push_back
#define eb emplace_back
#define pii pair<int,int>
#define vint vector<int>
#define SS stringstream
#define PQ priority_queue
#define MS(x,v) memset((x),(v),sizeof(x))
#define RZUNI(x) sort(x.begin(),x.end()), x.resize(unique(x.begin(),x.end())-x.begin())
#define FLH fflush(stdout)
#define CPPinput ios_base::sync_with_stdio(0); cin.tie(0)
#define FIN(fname) freopen(fname,"r",stdin)
#define FOUT(fname) freopen(fname,"w",stdout)

#define tm Ovuvuevuevue
#define y1 Enyetuenwuevue
#define left Ugbemugbem
#define ws Osas
#define dec tetteterette
#define exp expexpexpexp
#define expl explexplexpl

#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl

#ifdef WEAK
#include"/home/edison/Coding/cpp/template/debug.cpp"
#define DEB(...) printf(__VA_ARGS__),fflush(stdout)
#define WHR() printf("%s: Line %d",__PRETTY_FUNCTION__,__LINE__),fflush(stdout)
#define LOG(...) printf("%s: Line %d ",__PRETTY_FUNCTION__,__LINE__),printf(__VA_ARGS__),fflush(stdout)
#define DEBUG 1
#define exit(x) cout<<"exit code "<<x<<endl, exit(0)
#else
#define PDE(...) ;
#define DEB(...) ;
#define WHR() ;
#define LOG(...) ;
#define DEBUG 0
#endif

#define lowbit(x) ((x)&(-(x)))

#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#include<tuple>
#endif

void JIZZ(string output=""){cout<<output; exit(0);}

const ld PI=3.14159265358979323846264338327950288;
const ld eps=1e-13;
const ll mod=1e9+7;

int a[5005];
bitset<10005> le[5005],ri[5005];

int main(){
    CPPinput;
    int n,k; cin>>n>>k;
    le[0][0]=1;
    ri[n+1][0]=1;
    for(int i=1;i<=n;++i)cin>>a[i],a[i]=(a[i]>10000?10000:a[i]);
    for(int i=1;i<=n;++i)le[i]=(le[i-1])|(le[i-1]<<a[i]);
    for(int i=n;i>=1;--i)ri[i]=(ri[i+1])|(ri[i+1]<<a[i]);
    int cnt=0;
    for(int i=1;i<=n;++i){
        if(a[i]>=k){
            ++cnt;
            continue;
        }
        int mn=INT_MAX;
        int need=k-a[i];
        int rtop=-1;
        for(int j=10004;j>=0;--j){
            if(ri[i+1][j]){
                if(j>=need)mn=min(mn,j);
                else{
                    rtop=j;
                    break;
                }
            }
        }
        int lptr=0;
        while(rtop>=0){
            while(lptr<10005 && lptr+rtop<need)lptr=le[i-1]._Find_next(lptr);
            if(lptr<10005)mn=min(mn,lptr+rtop);
            while(--rtop, rtop>=0 && !ri[i+1][rtop]);
        }
        if(mn<k)++cnt;
    }
    cout<<n-cnt<<endl;
}

