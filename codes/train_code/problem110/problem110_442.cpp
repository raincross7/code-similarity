// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
// #pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define DECIMAL(n)  std::cout << std::fixed;std::cout << std::setprecision(n);
#define hell 1000000007
#define narak 998244353
#define PI 3.14159265358979323844
#define mp make_pair
#define eb emplace_back
#define pb push_back
#define fi first 
#define se second
#define all(v) v.begin(), v.end()
#define endl "\n"
#define sqr(a) (a)*(a)
#define __lcm(m,n) m*(n/__gcd(m,n))
#define inputarr(a,n) for(int xxx=0;xxx<n;++xxx) cin>>(a)[xxx]
#define sz(a) (int)a.size()
#define sl(a) (int)a.length()
#define display(x) for(auto &a:x) cout<<a<<" ";cout<<endl
#define debug cerr<<"bhau"<<endl
#define between(n,a,b) (a<=n&&n<=b)
#define elasped_time 1.0 * clock() / CLOCKS_PER_SEC 

#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    std::cerr << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');std::cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}


template<typename T, typename U> static inline void amin(T &x, U y) { 
    if (y < x) 
        x = y; 
}

template<typename T, typename U> static inline void amax(T &x, U y) { 
    if (x < y) 
        x = y; 
}

template<typename T,typename U> std::ostream& operator<<(std::ostream& out, std::pair<T,U> a) {
    out<<a.fi<<" "<<a.se;
    return out;
}

template<typename T,typename U> std::istream& operator>>(std::istream& in, std::pair<T,U> &a) {
    in>>a.fi>>a.se;
    return in;
}

inline long long toint(const std::string &s) {std::stringstream ss; ss << s; long long x; ss >> x; return x;}
inline std::string tostring(long long number) {std::stringstream ss; ss << number; return ss.str();}
inline std::string tobin(long long x) {return std::bitset<63>(x).to_string();}

std::mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());

#define ll long long
#define pii std::pair<int, int>
#define vi vector<int>  
#define vvi vector<vi > 
#define vii vector<pii >
#define point complex<ll>
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

//primes for hashing 937,991,1013,1409,1741

using namespace std;
using namespace __gnu_pbds;
#define int long long
void meowmeow321()
{
    int n,m,k;
    cin>>n>>m>>k;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            int cnt=i*m + j*n - 2*(i*j);
            if(cnt==k){
                cout<<"Yes\n";return;
            }
        }
    }
    cout<<"No\n";
}
signed main()
{
    FAST;
    int testcases=1;
    //cin>>testcases;
    for(int i=0;i<testcases;++i)
    {
        meowmeow321();
    }
    cerr<<endl<<"Time Elasped : "<<elasped_time<<endl;
    return 0;
}