#define _USE_MATH_DEFINES

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <functional>

using namespace std;

typedef long long int ll;
typedef std::pair<int, int> pii;
typedef std::pair<ll, int> pli;
typedef std::pair<ll, ll> pll;

#define FOR(i,n,m) for(ll i=(ll)(m);i<(ll)(n);++i)
#define REP(i,n) FOR(i,n,0)
#define IREP(i,n) for(ll i=(ll)(n);i>=0;--i)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll)1e15;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	double H = sin(M_PI*C / 180)*B;
	double S = A*H*0.5;
	double c = sqrt(A*A + B*B - 2*A*B*cos(M_PI*C / 180));

	cout << OF64 << S << endl;
	cout << OF64 << A + B + c << endl;
	cout << OF64 << H << endl;
	return 0;
}
