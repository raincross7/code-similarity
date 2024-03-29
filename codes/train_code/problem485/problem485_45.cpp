#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cmath>
#include <complex>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cassert>
#include <iomanip>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)
#define all(v) (v).begin(), (v).end()
#define pb(v) push_back(v)
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define bitcnt(x) __builtin_popcount(x)
#define fst first
#define snd second
#define Pqaz(T) priority_queue<T,vector<T>,greater<T>>
#define Pqza(T) priority_queue<T>
#define put(x) cout << x;
#define putsp(x) cout << x << ' ';
#define putbd cout << "---------------------------------------------" << endl;
#define putln(x) cout << x << endl;
#define debug(x) cerr << #x << "=" << x << endl;
#define ENJYU std::ios::sync_with_stdio(false);std::cin.tie(0);

typedef long long ll;
typedef pair<ll, ll> llP;
typedef pair<int, int> intP;
typedef complex<double> comp;
typedef vector <int> vec;
typedef vector <ll> vecll;
typedef vector <double> vecd;
typedef vector <vec> mat;
typedef vector <vecll> matll;
typedef vector <vecd> matd;

//vector の中身を出力
template <class T>ostream &operator<<(ostream &o,const vector<T>&v)
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}

const int MAX = 200020;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<29;
const ll INFL = 1e18;
const int MOD = 1000000007;

const int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
//const int dx[]={-1,-1,-1,0,1,1,1,0},dy[]={-1,0,1,1,1,0,-1,-1};

//********************************template END****************************************//

void solve(void)
{
	ll A, B;
	cin >> A >> B;

	int N = 20;

	mat grundy(N*2, vec(N*2, 0));

	rep(N, l) rep(l, i)
	{
		int j = l - i;
		set<int> s;
		for (int k = i/2; k > 0; k--)
		{
			s.emplace(grundy[i-2*k][j+k]);
		}
		for (int k = j/2; k > 0; k--)
		{
			s.emplace(grundy[i+k][j-2*k]);
		}
		rep(100, n)
		{
			if (s.find(n) == s.end())
			{
				grundy[i][j] = grundy[j][i] = n;
				break;
			}
		}
	}

	/*
	rep(N, i)
	{
		rep(N, j) printf("%3d", grundy[i][j]);
		printf("\n");
	}*/

	cout << (abs(A-B)>1 ? "Alice" : "Brown") << endl;


}

int main(void){
	solve();
	//cout << "yui(*-v・)yui" << endl;
	return 0;
}
