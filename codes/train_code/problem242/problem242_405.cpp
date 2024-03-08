#include <bits/stdc++.h>
#define ADD(a, b) a = (a + ll(b)) % mod
#define MUL(a, b) a = (a * ll(b)) % mod
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define rep(i, a, b) for(int i = int(a); i < int(b); i++)
#define rer(i, a, b) for(int i = int(a) - 1; i >= int(b); i--)
#define all(a) (a).begin(), (a).end()
#define sz(v) (int)(v).size()
#define pb push_back
#define sec second
#define fst first
#define debug(fmt, ...) Debug(__LINE__, ":", fmt, ##__VA_ARGS__)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<int, pi> ppi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vl> mat;
typedef complex<double> comp;
void Debug() {cout << '\n'; }
template<class FIRST, class... REST>void Debug(FIRST arg, REST... rest){
	cout<<arg<<" ";Debug(rest...);}
template<class T>ostream& operator<<(ostream& out,const vector<T>& v) {
	out<<"[";if(!v.empty()){rep(i,0,sz(v)-1)out<<v[i]<<", ";out<<v.back();}out<<"]";return out;}
template<class S, class T>ostream& operator<<(ostream& out,const pair<S, T>& v){
	out<<"("<<v.first<<", "<<v.second<<")";return out;}
const int MAX_N = 200010;
const int MAX_V = 100010;
const double eps = 1e-6;
const ll mod = 1000000007;
const int inf = 1 << 29;
const ll linf = 1LL << 60;
const double PI = 3.14159265358979323846;
///////////////////////////////////////////////////////////////////////////////////////////////////

int N;
ll X[1010], Y[1010];

void solve() {
	cin >> N;
	rep(i, 0, N) cin >> X[i] >> Y[i];
	bool odd = false, even = false;
	rep(i, 0, N) {
		if((X[i] + Y[i]) % 2) odd = true;
		else even = true;
	}
	if(odd && even) {
		cout << -1 << "\n";
		return;
	}
	if(even) {
		rep(i, 0, N) {
			X[i]--;
		}
	}
	int M = 39;
	cout << (even ? M + 1 : M) << "\n";
	for(int i = 0; i < M; i++) {
		cout << (1ll << (M - i - 1)) << " ";
	}
	if(even) cout << 1 << "\n";
	else cout << "\n";
	rep(i, 0, N) {
		string str;
		rer(j, M, 0) {
			ll d = (1ll << j);
			// debug(X[i], Y[i], d);
			if(X[i] + Y[i] >= 0 && Y[i] - X[i] >= 0) {
				str +=  'U';
				Y[i] -= d;
			}
			else if(X[i] + Y[i] >= 0 && Y[i] - X[i] <= 0) {
				str += 'R';
				X[i] -= d;
			}
			else if(X[i] + Y[i] <= 0 && Y[i] - X[i] >= 0) {
				str += 'L';
				X[i] += d;
			}
			else {
				str += 'D';
				Y[i] += d;
			}
		}
		if(even) str += 'R';
		cout << str << "\n";
	}
}

int main() {
#ifndef LOCAL
	ios::sync_with_stdio(false);
    cin.tie(0);
#endif
    cout << fixed;
	cout.precision(20);
	srand((unsigned int)time(NULL));
#ifdef LOCAL
	//freopen("in.txt", "wt", stdout); //for tester
    freopen("in.txt", "rt", stdin);
#endif	
	solve();
#ifdef LOCAL
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}

