// AtCoder-Template.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <vector>
using namespace std;
using ll = long long;
#define fst first
#define snd second
#define FOR(i,N) for(auto i=0; i<N; ++i)
#define FORREV(i,N,_cnt) for(auto i=N-1,cnt=_cnt; cnt > 0; --i, --cnt)
#define ALL(x) x.begin(), x.end()

/* clang-format off */
template <class T, size_t D> struct _vec { using type = vector<typename _vec<T, D - 1>::type>; };
template <class T> struct _vec<T, 0> { using type = T; };
template <class T, size_t D> using vec = typename _vec<T, D>::type;
template <class T> vector<T> make_v(size_t size, const T& init) { return vector<T>(size, init); }
template <class... Ts> auto make_v(size_t size, Ts... rest) { return vector<decltype(make_v(rest...))>(size, make_v(rest...)); }
template <class T> inline void chmin(T& a, const T& b) { if (b < a) a = b; }
template <class T> inline void chmax(T& a, const T& b) { if (b > a) a = b; }
/* clang-format on */

int main() {
#ifdef DEBUG
	ifstream ifs("in.txt");
	cin.rdbuf(ifs.rdbuf());
#endif
	ll N, K; cin >> N >> K; vector<ll> A(N); FOR(i, N) cin >> A[i];
	vector<ll> B(A); FOR(i, N) if (B[i] < 0) B[i] = 0;

	auto getRangeSum = [](const vector<ll>& A, ll L, ll R) {
		return A[R + 1] - A[L];
	};

	vector<ll> Accumu(B); Accumu.insert(Accumu.begin(), { 0LL });
	FOR(i, N) Accumu[i + 1] += Accumu[i];

	vector<ll> Accumu_Raw(A); Accumu_Raw.insert(Accumu_Raw.begin(), { 0LL });
	FOR(i, N) Accumu_Raw[i + 1] += Accumu_Raw[i];
	ll ans = 0;
	
	// White
	chmax(ans, getRangeSum(Accumu, K, N-1));
	FOR(_i, N - K) {
		auto drop_startE = _i;
		auto newend_E = _i + K;
		chmax(ans, getRangeSum(Accumu, 0, N-1) - getRangeSum(Accumu, drop_startE+1, newend_E)) ;
	}


	//ll KSum = accumulate(A.begin(), A.begin() + K, 0);
	chmax(ans, getRangeSum(Accumu, K, N - 1) + getRangeSum(Accumu_Raw, 0, K - 1));
	FOR(_i, N - K) {
		auto drop_startE = _i;
		auto newend_E = _i + K;
		chmax(ans, getRangeSum(Accumu, 0, N - 1) - getRangeSum(Accumu, drop_startE + 1, newend_E) + getRangeSum(Accumu_Raw, drop_startE+1, newend_E)); 
	}

	cout << ans << endl;
	return 0;
}
