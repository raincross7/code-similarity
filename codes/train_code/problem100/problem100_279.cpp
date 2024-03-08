#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>
#include <stack>
#include <queue>
#include <functional>
#include <limits.h>
#include <set>
#include <map>
#include <tuple>
using namespace std;

#define ll long long
#define ull unsigned long long
#define rep(i,N) for (ll i=0;i<N;i++)
#define loop(i,N,M) for(ll i=N;i<M;i++)
#define MAX(v) *max_element(v.begin(),v.end())
#define MIN(v) *min_element(v.begin(),v.end())
#define SORTL2S(type,v) sort(v.begin(),v.end(),greater<type>())
#define SORTS2L(type,v) sort(v.begin(),v.end())
#define SORTMF(v,func) sort(v.begin(),v.end(),func)
#define MP(a,b) make_pair(a,b)

#if __has_include("debug.hpp")
#include "debug.hpp"
#else
template<typename T>
void debug(T& obj) {}
#endif

template<typename T>
T in(){
	T val;
	cin >> val;
	return val;
}

template<typename T>
vector<T> inv(ll num) {
	vector<T> val(num);
	rep(i,num) cin >> val[i];
	return val;
}

//----------------------------------------------------------------------
void solve() {

	vector<vector<int>> vec(3, vector<int>(3));
	rep(i,3) rep(j,3) cin >> vec[i][j];
	ll n;
	cin >> n;
	vector<int> b(n);
	rep(i,n) {
		cin >> b[i];
		rep(j,3) rep(k,3) {
			if (vec[j][k]==b[i]) vec[j][k] = 0;
		}
	}

	if ((vec[0][0]==0 && vec[0][1]==0 && vec[0][2]==0) ||
	(vec[1][0]==0 && vec[1][1]==0 && vec[1][2]==0) ||
	(vec[2][0]==0 && vec[2][1]==0 && vec[2][2]==0) ||
	(vec[0][0]==0 && vec[1][0]==0 && vec[2][0]==0) ||
	(vec[0][1]==0 && vec[1][1]==0 && vec[2][1]==0) ||
	(vec[0][2]==0 && vec[1][2]==0 && vec[2][2]==0) ||
	(vec[0][0]==0 && vec[1][1]==0 && vec[2][2]==0) ||
	(vec[0][2]==0 && vec[1][1]==0 && vec[2][0]==0)) {
		cout << "Yes";
	} else {
		cout << "No";
	}



}
//----------------------------------------------------------------------

int main(int argc, char* argv[]) {
	solve();
	return 0;
}
