///...................................*****.................................................///
///                  Mujahidul Islam ( mujahidulislam2923@gmail.com )                       ///
///                  Department of Ict                                                      ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///

#include<bits/stdc++.h>
using namespace std;

#define          FaRaBi                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define          ll                     long long int
#define          ld                     long double
#define          pii                    pair < int, int>
#define          pll                    pair < ll, ll>
#define          MOD                    1000000007
#define          ff                     first
#define          ss                     second
#define          pb                     push_back
#define          pf                     printf
#define          mp                     make_pair
#define          gcd(a, b)              __gcd(a,b)
#define          lcm(a, b)              ((a)*(b)/gcd(a,b))
#define          PI                     acos(-1.0)
#define          zero(a)                memset(a,0,sizeof a)
#define          all(v)                 v.begin(),v.end()
#define          Max(v)                 *max_element(all(v))
#define          Min(v)                 *min_element(all(v))
#define          Upper(c,x)             (upper_bound(c.begin(),c.end(),x)-c.begin())
#define          Lower(c,x)             (lower_bound(c.begin(),c.end(),x)-c.begin())
#define          Unique(X)              (X).erase(unique(all(X)),(X).end())
#define          no                     cout << "NO" << endl ;
#define          yes                    cout << "YES" << endl ;
#define          segment_tree           int Lnode = node << 1 , Rnode = Lnode + 1 , mid = ( b + e ) >> 1 ;

///--------------------**********----------------------------------

vector < ll > v, v1, v2, v3, v4 ;
vector < pair < ll, pll > > vec1, vec2 ;
vector < pll > vec, Vec ;
vector < ll > adj[ 25 ] ;
map < char, ll > Mp, Mp1, Mp2 ;
set < char > st, st1, st2 ;
queue < ll > Q ;
stack < char > Stk ;
multiset < char > S ;
vector < string > vs ;


///---------------------**********--------------------------------

ll n, m, x, y ;
string s ;

void Reset()
{

}

void Input()
{
    cin >> n >> m ;
    for( int i = 0 ; i < n ; i ++ )
    {
        cin >> s ;
        vs.pb( s ) ;
    }
}

void Calculation()
{
    sort( all( vs ) ) ;
    string ans = "" ;
    for( int i = 0 ; i < n ; i ++ )
    {
        ans += vs[ i ] ;
    }
    cout << ans << endl ;
}

void solve()
{
    Reset() ;
    Input() ;
    Calculation() ;
}

int main()
{
    FaRaBi ;
    int t ;
    //cin >> t ;
    t = 1 ;
    while( t-- ) solve() ;
    return 0 ;
}
