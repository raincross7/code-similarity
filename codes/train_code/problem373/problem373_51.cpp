
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
#include<time.h>
#include<array>
#include<iomanip>
#include<list>
#include<set>
#include<map>
#include<random>
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


//BDD,ZDD,kdtree, bdtree,bicalc, bolonoy, doloney, tree, chinesemod,segmenttree,daikusutora, saidairyuu, 2bugurahu, heirokenshutu, topologicalsort, kyourenketuseibun

#define REP(i,a,b) for(ll i = a; i < b; ++i)
#define PRI(s) cout << s << endl
#define PRIF(v, n) printf("%."#n"f\n", v)
#define PRIY PRI("Yes")
#define PRIN PRI("No")
template<typename A, typename B>
void mins(A & a, const B & b) { a = min(a, (A)b); };
template<typename A, typename B>
void maxs(A & a, const B & b) { a = max(a, (A)b); };


int main() {
	ll N,K;
	cin >> N>>K;
	vector<pair<ll, ll>> V(N);
	REP(i, 0, N)cin >> V[i].first >> V[i].second;
	auto cmp = [](pair<ll, ll>a, pair<ll, ll>b) {
		return a.second > b.second;
	};
	sort(V.begin(), V.end(),cmp);
	unordered_set<ll> used;
	priority_queue<ll, vector<ll>, greater<ll>> q;
	ll sum = 0;
	ll ans = 0;
	REP(i, 0, K) {
		if (used.count(V[i].first) > 0) q.push(V[i].second);
		else used.insert(V[i].first);
		sum += V[i].second;
	}
	ans = sum + used.size() * used.size();
	REP(i, K, N) {
		if (q.empty())break;
		if (used.count(V[i].first) > 0) continue;
		else used.insert(V[i].first);
		sum -= q.top();
		q.pop();
		sum += V[i].second;
		maxs(ans, sum + used.size() * used.size());
	}
	PRI(ans);
	return 0;
}