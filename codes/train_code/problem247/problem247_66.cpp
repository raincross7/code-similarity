#include<iostream>
#include<iomanip>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<vector>
#include<array>
#include<string>
#include<stack>
#include<queue>
#include<algorithm>
#include<cassert>
#include<functional>
#include<random>
#include<complex>
#include<bitset>
#include<chrono>
#include<boost/multiprecision/cpp_int.hpp>
#define int int64_t
#define uint uint64_t
#define REP(i, a, b) for (int64_t i = (int64_t)(a); i < (int64_t)(b); i++)
#define rep(i, a) REP(i, 0, a)
#define EACH(i, a) for (auto i: a)
#define ITR(x, a) for (auto x = a.begin(); x != a.end(); x++)
#define ALL(a) (a.begin()), (a.end())
#define HAS(a, x) (a.find(x) != a.end())
#define Min(x) *min_element(ALL(x))
#define Max(x) *max_element(ALL(x))
#define Unique(L) (L.erase(unique(ALL(L)), L.end()))
#define veccat(v1, v2) std::copy((v2).begin(),(v2).end(),std::back_inserter(v1)/*v1の後ろにv2を入れる*/)
#define intmax (std::numeric_limits<int64_t>::max() / 4)
using namespace std;
typedef boost::multiprecision::cpp_int bigint;
const double EPS = 1e-9;
const double PI = acos(-1.0);



signed main()
{
	std::cin.sync_with_stdio(false);
	std::cin.tie(0);

	int N;
	cin >> N;
	vector<int>a(N);
	rep(i, N)cin >> a[i];

	vector<array<int, 2>>s;
	rep(i, N) {
		s.push_back({ a[i],i });
	}
	s.push_back({ 0,0 });
	std::sort(ALL(s), std::greater<array<int, 2>>());
	
	vector<int>ans(N, 0);
	int minindex = intmax;
	rep(i, N) {
		minindex = min(minindex, s[i][1]);
		ans[minindex] += (s[i][0] - s[i + 1][0]) * (i + 1);
	}

	rep(i, N)cout << ans[i] << endl;

	return 0;
}