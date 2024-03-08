// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))  
#define REVERSE(v) reverse(ALL(v))
#define endl "\n"
#define maxc(v) *max_element(ALL(v))
#define minc(v) *min_element(ALL(v))
#define sqr(a) (a)*(a)
#define GCD(m,n) __gcd(m,n)
#define LCM(m,n) m*(n/GCD(m,n))
#define inputarr(a,n) for(int xxx=0;xxx<n;++xxx) cin>>(a)[xxx]
#define rep(i, n)    for(int i = 0; i < (n); ++i)
#define repA(i, a, n)  for(int i = a; i <= (n); ++i)
#define repD(i, a, n)  for(int i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
#define sz(a) (int)a.size()
#define sl(a) (int)a.length()
#define invect(data,n,commands) for(int xxx = 0;xxx<n;xxx++){int tmp;cin>>tmp;data.pb(tmp);commands}
#define inset(data,n,commands) for(int xxx = 0;xxx<n;xxx++){int tmp;cin>>tmp;data.insert(tmp);commands}
#define display(x) trav(a,x) cout<<a<<" ";cout<<endl
#define debug cerr<<"bhau"<<endl
#define between(n,a,b) (a<=n&&n<=b)
#define clamp(n,a,b) (((n)<(a))?(a):(((n)>(b))?(b):(n))) 

#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    std::cerr << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');std::cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}

#define elasped_time 1.0 * clock() / CLOCKS_PER_SEC 

template<typename T, typename U> static inline void amin(T &x, U y) 
{ 
    if (y < x) 
        x = y; 
}
template<typename T, typename U> static inline void amax(T &x, U y) 
{ 
    if (x < y) 
        x = y; 
}

std::mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());

#define ll long long
#define ld long double 
#define pii std::pair<int, int> 
#define pll std::pair<ll, ll>  
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

std::ostream& operator<<(std::ostream& out,pii a)
{
    out<<a.fi<<" "<<a.se;
    return out;
}
std::ostream& operator<<(std::ostream& out,pll a)
{
    out<<a.fi<<" "<<a.se;
    return out;
}
std::istream& operator>>(std::istream& in,pii &a)
{
    in>>a.fi>>a.se;
    return in;
}
std::istream& operator>>(std::istream& in,pll &a)
{
    in>>a.fi>>a.se;
    return in;
}

using namespace std;
using namespace __gnu_pbds;
bool win[200][200];
void meowmeow321()
{
    ll a,b;
    cin>>a>>b;
    cout<<(abs(a-b)<=1?"Brown":"Alice");
    return ;
    for (int s = 0; s <= 200; ++s) {
        for (int a = 0; a <= s; ++a) {
            int b=s-a;
            for (int i = 1; a-2*i >=0; ++i) {
                if(!win[a-2*i][b+i]){
                    win[a][b]=1;
                }
            }
            for (int i = 1; b-2*i >=0; ++i) {
                if(!win[a+i][b-2*i]){
                    win[a][b]=1;
                }
            }
            if(!win[a][b]){
                cout<<a<<" "<<b<<endl; 
            }
        }
    }
}
int main()
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