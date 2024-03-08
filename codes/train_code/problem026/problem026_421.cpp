/*
* @Author: _dp95
* @Date:   2020-04-14 13:00:55
*/
#include "bits/stdc++.h"
using namespace std ;

#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll ;
typedef long double ldb ;

#define mp make_pair
#define pb push_back
#define F first
#define S second
#define nl '\n'

#define all( x ) x.begin(),x.end() 
#define sz( x ) ( int )( x ).size( )
#define mem( a, val ) memset(a, val, sizeof( a ) )
#define deci( x ) cout<<fixed<<setprecision( x );
#define bitcount( x ) __builtin_popcountll( x )

const int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

const int MAX = 2*1000*1000 + 10 ;
const ll INF = 1e18 ;
const int MOD = 1e9 + 7 ;

signed main( ){
  timesaver ;
  int a, b ;
  cin >> a >> b ;
  if( a == b ){
    return cout << "Draw" << nl, 0 ;
  }
  string ans = "";
  if( a == 1 ){
    ans = "Alice" ;
  }
  else if( b == 1 ){
    ans = "Bob" ;
  }
  else if( a < b ){
    ans = "Bob" ;
  }
  else if( a > b ){
    ans = "Alice" ;
  }
  cout << ans << nl ;
}