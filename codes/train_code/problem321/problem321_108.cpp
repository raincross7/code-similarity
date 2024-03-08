#include <bits/stdc++.h>
#ifdef HIRO
#define d(f_, ...) printf((f_), ##__VA_ARGS__)
#else
#define d(f_, ...)
#endif

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<long long, long long> pllll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector< pair<int, int> > vii;
typedef vector< pair<long long, long long> > vllll;
typedef map<int, int> mii;
typedef map<long long, long long> mllll;
typedef queue<int> qi;
typedef queue< pair<int, int> > qp;
#define mp make_pair
#define pi 3.14159265358979323846
#define MAX max_element
#define MIN min_element
#define all(v) v.begin(), v.end()
#define gt(T) greater<T>()
#define sum(v) accumulate(v.begin(), v.end(), 0ll)
#define uni(v) do{ \
  sort(v.begin(), v.end()); \
  decltype(v)::iterator result = unique(v.begin(), v.end()); \
  v.erase(result, v.end()); \
}while(0)
#define fi(init, n) for(int i = init; i < n; ++i)
#define fj(init, n) for(int j = init; j < n; ++j)
#define fk(init, n) for(int k = init; k < n; ++k)
#define zero(x) memset(x, 0, sizeof(x))
#define negative(x) memset(x, ~0, sizeof(x))
#define bitsum(x) __builtin_popcount(x)
const ll MOD = 1e9 + 7;
const int INF = 1e9;
const int di[] = { 0, 1, 0, -1 };
const int dj[] = { 1, 0, -1, 0 };

template<typename T>
T gcd(T a, T b) {
	return b ? gcd(b, a % b) : a;
}
template<typename T>
T lcm(T a, T b) {
	return a / gcd(a, b) * b;
}
template<typename T>
int finder(vector<T> vec, T number) {
	auto itr = find(vec.begin(), vec.end(), number);
	size_t index = distance(vec.begin(), itr);
	if (index != vec.size()) return 1;
	else return 0;
}
ll frac(ll n){
	if (n == 0) return 1;
	return (n * frac(n - 1)) % MOD;
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

int main(int argc, char** argv) {
#ifdef HIRO
  string quiz(argv[1]);
  string id(argv[2]);
  string filename("input/" + quiz + "/" + id + ".txt");
  ifstream fin(filename);
  if (fin.peek() == ifstream::traits_type::eof()) {
    cout << "No input.";
    return 0;
  }
  ifstream cin(filename);
  std::cin.rdbuf(cin.rdbuf());
#endif
  // array                                             3 2 1 4
  // number of smaller numbers in array                2 1 0 3  -> sum: 6 (as A)
  // number of smaller numbers in array after itself   2 1 0 0  -> sum: 3 (as B)
  //
  // if K is 4:
  //
  // 3 2 1 4    3 2 1 4    3 2 1 4     3 2 1 4
  //  A x 3      A x 2      A x 1       A x 0
  //  B x 1      B x 1      B x 1       B x 1 
  ll ans = 0;
  ll n, k;
  cin >> n >> k;
  ll arr[n], order[n], all[n], ordersum = 0, allsum = 0;
  zero(order);
  zero(all);

  fi(0, n)
    cin >> arr[i];

  fi(0, n)
    fj(0, n) {
      if(arr[i] > arr[j]) {
        all[i]++;
        if(i < j)
          order[i]++;
      }
    }
  fi(0, n) {
    (ordersum += order[i]) %= MOD;
  }
  fi(0, n) {
    (allsum += all[i]) %= MOD;
  }
  (ans += k * ordersum) %= MOD;
  (ans += (((k * (k - 1) / 2) % MOD) * allsum) % MOD ) %= MOD;
  cout << ans << endl;
  return 0;
}
