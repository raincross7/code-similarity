#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int ll

// [a -> b-1]
#define reps(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
// [0 -> a-1]
#define rep(i, a) reps(i, 0, (a))
// [a-1 -> b]
#define rreps(i, a, b) for (int i = (int)((a)-1); i >= (int)(b); i--)
// [a-1 -> 0]
#define rrep(i, a) rreps(i, a, 0)
#define all(v) (v).begin(), (v).end()
// next_permutation(all(v))
#define PERM(v) next_permutation(all(v))
/*sort(all(v));
 * (v).erase(unique(all(v)), v.end())*/
#define UNIQUE(v)\
	sort(all(v));\
	(v).erase(unique(all(v)), v.end())
// b is [a, c)
#define RANGE(a, b, c) ((a) <= (b) && (b) < (c))
// c is [a, e) && d is [b, f)
#define RANGE2D(a, b, c, d, e, f) (RANGE((a), (c), (e)) && RANGE((b), (d), (f)))
#define chmin(a, b) a = min(a, (b))
#define chmax(a, b) a = max(a, (b))
#define fcout cout << fixed << setprecision(15)
#define YES(f) cout << ((f) ? YES_STR : NO_STR) << endl;

#ifdef LOCAL_DEBUG_OPTION
namespace debug_print_n{
struct DebugPrint {
	template<class T, class U = remove_const_t<remove_reference_t<T>>>
	static enable_if_t<is_integral<U>::value && !is_same<U, bool>::value && !is_same<U, char>::value> DUMP_SUB_FUNCTION(T x) {
		cerr << x;
	}
	template<class T, class U = remove_const_t<remove_reference_t<T>>>
	static enable_if_t<is_same<U, bool>::value> DUMP_SUB_FUNCTION(T x) {
		if (x) cerr << "True";
		else cerr << "False";
	}
	template<class T, class U = remove_const_t<remove_reference_t<T>>>
	static enable_if_t<is_same<U, char>::value> DUMP_SUB_FUNCTION(T x) {
		cerr << '\'' << x << '\'';
	}
	template<class T, class U = remove_const_t<remove_reference_t<T>>>
	static enable_if_t<is_same<U, string>::value> DUMP_SUB_FUNCTION(T x) {
		cerr << '\"' << x << '\"';
	}
	template<class T>
	static enable_if_t<is_same<T, const char*>::value> DUMP_SUB_FUNCTION(T x) {
		cerr << string(x);
	}
	template<class T>
	static enable_if_t<true> DUMP_SUB_FUNCTION(vector<T> x) {
		cerr << '{';
		for (size_t i = 0; i < x.size(); i++) {
			if (i) cerr << ", ";
			DUMP_SUB_FUNCTION(x[i]);
		}
		cerr << '}';
	}
	template<class T, size_t N>
	static enable_if_t<true> DUMP_SUB_FUNCTION(array<T, N> x) {
		cerr << '{';
		for (size_t i = 0; i < x.size(); i++) {
			if (i) cerr << ", ";
			DUMP_SUB_FUNCTION(x[i]);
		}
		cerr << '}';
	}
	template<class T>
	static enable_if_t<true> DUMP_SUB_FUNCTION(set<T> x) {
		cerr << '[';
		size_t i = 0;
		for (auto itr = x.begin(); itr != x.end(); itr++, i++) {
			if (i) cerr << ", ";
			DUMP_SUB_FUNCTION(*itr);
		}
		cerr << ']';
	}
	template<class T, class U>
	static enable_if_t<true> DUMP_SUB_FUNCTION(map<T, U> x) {
		cerr << '[';
		size_t i = 0;
		for (auto itr = x.begin(); itr != x.end(); itr++, i++) {
			if (i) cerr << ", ";
			DUMP_SUB_FUNCTION(itr->first);
			cerr << " : ";
			DUMP_SUB_FUNCTION(itr->second);
		}
		cerr << ']';
	}
	template<class T, class U = remove_const_t<remove_reference_t<T>>>
	static enable_if_t<is_floating_point<U>::value> DUMP_SUB_FUNCTION(T x) {
		cerr << fixed << setprecision(5) << x;
	}
	template<class T, class U>
	static enable_if_t<true> DUMP_SUB_FUNCTION(pair<T, U> p) {
		cerr << '(';
		DUMP_SUB_FUNCTION(p.first);
		cerr << ", ";
		DUMP_SUB_FUNCTION(p.second);
		cerr << ')';
	}
	template<int num = 0, class... Args>
	static enable_if_t<num == sizeof...(Args)> DUMP_SUB_FUNCTION(tuple<Args...> t) {
		if (num) cerr << ')';
	}
	template<int num = 0, class... Args>
	static enable_if_t<num < sizeof...(Args)> DUMP_SUB_FUNCTION(tuple<Args...> t) {
		if (num == 0) cerr << '(';
		DUMP_SUB_FUNCTION(get<num>(t));
		if (num + 1 < sizeof...(Args)) cerr << ", ";
		DUMP_SUB_FUNCTION<num+1>(t);
	}
	template<long unsigned N>
	static enable_if_t<true> DUMP_SUB_FUNCTION(bitset<N> x) {
		cerr << x;
	}
};
void dump() {
	cerr << endl;
}
template<class Head, class... Tail>
void dump(Head&& head, Tail&&... tail) {
	DebugPrint::DUMP_SUB_FUNCTION(head);
	if (sizeof...(Tail) != 0) {
		cerr << ' ';
	}
	dump(forward<Tail>(tail)...);
}
} // namespace debug_print_n
using debug_print_n::dump;
#else
template<class... Args> void dump(Args&&... args) { }
#endif


signed main(){
	int N, A, B; cin >> N >> A >> B;
	if (N + 1 < A + B || A * B < N) {
		cout << -1 << endl;
		return 0;
	}
	vector<int> cnt(A, 1);
	cnt[0] = B;
	{
		int need = N - accumulate(all(cnt), 0);
		reps(i, 1, A) {
			int t = min(B-1, need);
			cnt[i] += t;
			need -= t;
		}
	}
	for (int i = 0, n = 0; i < A; i++) {
		for (int j = n + cnt[i]; j > n; j--) {
			if (i || j != n + cnt[i]) cout << ' ';
			cout << j;
		}
		n += cnt[i];
	}
	cout << endl;
	return 0;
}