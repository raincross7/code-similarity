#include <bits/stdc++.h>
#define DEBUG 1
using namespace std;

namespace output{
    void __(short x){cout<<x;}
    void __(unsigned x){cout<<x;}
    void __(int x){cout<<x;}
    void __(long long x){cout<<x;}
    void __(unsigned long long x){cout<<x;}
    void __(double x){cout<<x;}
    void __(long double x){cout<<x;}
    void __(char x){cout<<x;}
    void __(const char*x){cout<<x;}
    void __(const string&x){cout<<x;}
    void __(bool x){cout<<(x?"true":"false");}
    template<class S,class T>
    void __(const pair<S,T>&x){__(DEBUG?"(":""),__(x.first),__(DEBUG?", ":" "),__(x.second),__(DEBUG?")":"");}
    template<class T>
    void __(const vector<T>&x){__(DEBUG?"{":"");bool _=0;for(const auto&v:x)__(_?DEBUG?", ":" ":""),__(v),_=1;__(DEBUG?"}":"");}
    template<class T>
    void __(const set<T>&x){__(DEBUG?"{":"");bool _=0;for(const auto&v:x)__(_?DEBUG?", ":" ":""),__(v),_=1;__(DEBUG?"}":"");}
    template<class T>
    void __(const multiset<T>&x){__(DEBUG?"{":"");bool _=0;for(const auto&v:x)__(_?DEBUG?", ":" ":""),__(v),_=1;__(DEBUG?"}":"");}
    template<class S,class T>
    void __(const map<S,T>&x){__(DEBUG?"{":"");bool _=0;for(const auto&v:x)__(_?DEBUG?", ":" ":""),__(v),_=1;__(DEBUG?"}":"");}
    void pr(){cout<<"\n";}
    template<class S,class... T>
    void pr(const S&a,const T&...b){__(a);if(sizeof...(b))__(' ');pr(b...);}
}

using namespace output;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<int,char> pic;
typedef pair<double,double> pdd;
typedef pair<ld,ld> pld;
typedef vector<int> vi;
typedef vector<ll> vl;

#define pb push_back
#define fox(i,x,y) for(int i=(x);i<=(y);i++)
#define foxr(i,x,y) for(int i=(y);i>=(x);i--)

const ll MN = 1e5+5;
ll N, M, V, P, i, j, arr[MN], ps[MN], lim, cnt, lo, hi;

int main(){
    scanf("%lld%lld%lld%lld",&N,&M,&V,&P);
    for(i=1;i<=N;i++) scanf("%lld",&arr[i]);
    sort(arr+1,arr+N+1,[](ll i,ll j){return i>j;});
    for(i=1;i<=N;i++) ps[i]=ps[i-1]+arr[i];
    lim = arr[P];
    for(i=1;i<=N;i++){
        if(arr[i]>=lim) cnt++;
        else{
            ll rem = (V-(N-i))*M;
            lo=1, hi=i;
            while(lo<hi){
                ll m=(lo+hi)>>1;
                if(arr[m]<=arr[i]+M) hi=m;
                else lo=m+1;
            }
            if(lo<=P){
                if((P-1)*M+(i-P+1)*(arr[i]+M)-(ps[i]-ps[P-1])>=rem) cnt++;
            }
        }
    }
    printf("%lld\n",cnt);
    return 0;
}
