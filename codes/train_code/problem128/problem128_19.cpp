#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
#include <string>
#include <bitset>
#include <tuple>
#include <cmath>
#include <map>

template<typename T> bool chmax( T &a, const T &b ) { if ( a <= b ) { a = b; return ( true ); } else { return ( false ); } }
template<typename T> bool chmin( T &a, const T &b ) { if ( a >= b ) { a = b; return ( true ); } else { return ( false ); } }

using namespace std;

using ll = long long;
using ull = unsigned long long;

using Pll  = pair<ll, ll>;
using Pull = pair<ull, ull>;

#define eb emplace_back
#define pb push_back
#define mp make_pair
#define mt make_tuple

#define F first
#define S second

#define rep( i, n ) for ( int i = 0; i < (int)( n ); ++i )
#define reps( i, n ) for ( int i = 1; i <= (int)( n ); ++i )
#define rrep( i, n ) for ( int i = (int)( ( n ) - 1 ); i >= 0; --i )
#define rreps( i, n ) for ( int i = (int)( ( n ) ); i > 0; --i )
#define arep( i, v ) for ( auto &&i : ( v ) )

template<typename T> T gcd( const T a, const T b ) { return ( b ? gcd( b, a % b ) : a ); }

#define ALL( c ) ( c ).begin(), ( c ).end()
#define RALL( c ) ( c ).rbegin(), ( c ).rend()
#define UNIQUE( c ) ( c ).erase( unique( ( c ).begin(), ( c ).end() ), ( c ).end() )

constexpr ll MOD = 1000000007LL;

#define y0 y3487465
#define y1 y8687969
#define j0 j1347829
#define j1 j234892
#define next asdnext
#define prev asdprev

template<typename T = ll> class UnionFind {
public:
	UnionFind( T n ) { rep( i, n ) { par.resize( n ); siz.resize( n ); par[i] = i; siz[i] = 1; } }
	T find( T x ) { if ( x == par[x] ) return ( x ); else return( par[x] = find( par[x] ) ); }
	void unite( T x, T y ) { T xx = find( x ); T yy = find( y ); if ( xx == yy ) return;
		if ( siz[xx] <= siz[yy] ) swap( xx, yy ); par[yy] = xx; siz[xx] += siz[yy]; }
private:
	vector<T> par, siz;
};

template<typename T = ll> T power( T a, T b, T m = MOD ) {
	T res = 1;
	while ( b > 0 ) { if ( b & 1 ) res = res * a % m;
		a = a * a % m; b >>= 1; }
	return ( res );
}

/*
constexpr ll MAX = 500010;
ll fact[MAX];
ll inv[MAX];
ll inv_fact[MAX];

template<typename T> void initComb( T n, T m = MOD )
{
	fact[0] = fact[1] = inv_fact[0] = inv_fact[1] = 1;
	inv[1] = 1;
	for ( int i = 2; i < n; i++ ) {
		fact[i] = ( fact[i - 1] * i ) % m;
		inv[i] = m - inv[m % i] * ( m / i ) % m;
		inv_fact[i] = inv_fact[i - 1] * inv[i] % m;
	}
}

template<typename T> T comb( T n, T r, T m = MOD )
{
	if ( n < r ) return ( 0 );
	if ( n < 0 || r < 0 ) return ( 0 );
	return ( fact[n] * ( inv_fact[r] * inv_fact[n - r] % m ) % m );
}
*/

void replace( string &s, string t, string r ) {
	string::size_type p = 0;
	while ( ( p = s.find( t, p ) ) != string::npos ) {
		s.replace( p, t.length(), r );
		p += r.length();
	}
}


int main()
{
	int A, B;
	cin >> A >> B;

	// 出力を100行100列で固定する
	vector<vector<int>> v( 100, vector<int>( 100, 0 ) );

	// 白と黒で半々に塗り分ける
	for ( int i = 0; i < 50; i++ )
	{
		for ( int j = 0; j < 100; j++ )
		{
			v[i][j] = 1;
		}
	}

	// 白の領域に黒い点を入れていく
	--A, --B;	//	それぞれ1つずつはすでに領域があるので
	int black = 0;
	for ( ; black < B / 50; black++ )
	{
		for ( int j = 1; j < 100; j += 2 )
		{
			v[2 * black + 51][j] = 1;
		}
	}
	for ( int i = 0; i < B % 50; i++ )
	{
		v[2 * black + 51][i * 2 + 1] = 1;
	}

	// 黒の領域に白い点を入れていく
	int white = 0;
	for ( ; white < A / 50; white++ )
	{
		for ( int j = 1; j < 100; j += 2 )
		{
			v[2 * white + 1][j] = 0;
		}
	}
	for ( int i = 0; i < A % 50; i++ )
	{
		v[2 * white + 1][i * 2 + 1] = 0;
	}

	cout << "100 100" << endl;
	vector<string> res( 100 );
	for ( int i = 0; i < 100; i++ )
	{
		for ( int j = 0; j < 100; j++ )
		{
			res[i] += ( v[i][j] ? '#' : '.' );
		}
	}
	arep( it, res ) cout << it << endl;
	return ( 0 );
}
