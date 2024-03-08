#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdint.h>
#include<vector>
#include<deque>
#include<stack>
#include<functional>
#include<string>
#include<cstring>
#include<array>
#include<iomanip>
#include<list>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include <queue>
#include<boost/multiprecision/cpp_int.hpp>


using namespace std;
using namespace boost::multiprecision;

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;
using ldb = long double;

#define REP(i,a,b) for(ll i = a; i < b; ++i)
#define PRI(s) cout << s << endl
#define PRIF(v, n) printf("%."#n"f\n", v)
#define PRIY PRI("Yes")
#define PRIN PRI("No")
template<typename A, typename B>
void mins(A& a, const B& b) { a = min(a, (A)b); };
template<typename A, typename B>
void maxs(A& a, const B& b) { a = max(a, (A)b); };



int main() {
	ll N, K; cin >> N >> K;
	vector<ll> A(2+N);
	vector<bitset<5001>> dpl(2 + N), dpr(2 + N);
	REP(i, 1, 1+N) cin >> A[i];
	REP(i, 1, 2 + N) {
		dpl[i] |= dpl[i - 1];
		dpl[i] |= (dpl[i - 1] << A[i]);
		if (A[i] <= 5000) dpl[i][A[i]] = true;

		dpr[N + 1 - i] |= dpr[N + 2 - i];
		dpr[N + 1 - i] |= (dpr[N + 2 - i] << A[N + 1 - i]);
		if (A[N + 1 - i] <= 5000) dpr[N + 1 - i][A[N + 1 - i]] = true;
	}
	vector<vector<int32_t>> tbll(2 + N), tblr(2 + N);
	REP(i, 0, 2 + N) {
		tbll[i].push_back(0);
		REP(j, 0, 1 + K) if (dpl[i][j]) tbll[i].push_back(j);

		tblr[i].push_back(0);
		REP(j, 0, 1 + K) if (dpr[i][j]) tblr[i].push_back(j);
	}
	ll ans = 0;
	REP(i, 1, 1 + N) {
		bool ok = true;
		for (ll l : tbll[i-1]) {
			auto itra = lower_bound(tblr[i+1].begin(), tblr[i+1].end(), K - A[i] - l);
			auto itrb = lower_bound(tblr[i+1].begin(), tblr[i+1].end(), K - l);
			if (distance(itra, itrb) > 0) {
				ok = false;
				break;
			}
		}
		if (ok) ++ans;
	}
	PRI(ans);
	return 0;
}
