#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int> >;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reprep(i,j,h,w) rep(i,h)rep(j,w)
#define rrep(i,m,n) for(int i = m; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define aall(x,n) (x).begin(),(x).begin()+(n)
#define VEC(type,name,n) std::vector<type> name(n);rep(i,n)std::cin >> name[i];
#define pb push_back
#define pf push_front
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define mp make_pair
#define sum accumulate
#define keta fixed<<setprecision
#define vvector(name,typ,m,n,a)vector<vector<typ> > name(m,vector<typ> (n,a))
#define vvvector(name,t,l,m,n,a) vector<vector<vector<t> > > name(l, vector<vector<t> >(m, vector<t>(n,a)));
#define vvvvector(name,t,k,l,m,n,a) vector<vector<vector<vector<t> > > > name(k,vector<vector<vector<t> > >(l, vector<vector<t> >(m, vector<t>(n,a)) ));
typedef long long ll;
const int INF = 2000000000;
const ll INF64 = 1000000000000000ll;
const ll MOD = 1000000007LL;
typedef unsigned int uint;

int main(){
    ll n,l;
    std::cin >> n >> l;
    std::vector<ll> a(n);
    rep(i,n)std::cin >> a[i];
    std::vector<ll> aa(n);
    rep(i,n-1)aa[i]=a[i]+a[i+1];
    bool han=0;
    int dum=0;
    rep(i,n-1)if(aa[i]>=l){
        han=1;
        dum=i;
    }
    if(han){
        std::cout << "Possible"<< std::endl;
        rep(i,dum){
        std::cout << i+1 << std::endl;
        }
        rep(i,n-dum-1){
            std::cout << n-i-1 << std::endl;
        }
    }
    else std::cout << "Impossible"<< std::endl;
    
}