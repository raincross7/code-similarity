//g++ main.cpp -I /usr/local/include/ac-library
#include<cmath>
//#include <atcoder/all>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
//using namespace atcoder;
stack<int> st;
queue<int> qu;
queue<pair<int,int> > qu2;
priority_queue<int> pq;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define rep2(i,n) for(int i=1; i<=(int)(n); i++)
#define mins(x,y) x=min(x,y)
#define maxs(x,y) x=max(x,y)
#define ALL(a) a.begin(), a.end()
typedef set<int> set_t;
typedef set<string> set_g;
typedef complex<double> xy_t;
static const int NIL = -1;
static const int INF = 1000000007;
#define mp make_pair
#define sz(x) int(x.sise())
#define mod 1000000007
#define reps(i,s,n) for(int i = s; i < n; i++)
#define Rreps(i,n,e) for(int i = n - 1; i >= e; --i)
#define Rrep(i,n) Rreps(i,n,0)
deque<int> deq;
#define fi first
#define se second
//const ll MOD = 998244353;
const ll MOD = (1e+9) + 7;
typedef pair<int, int> P;
typedef vector<ll> vec;
typedef vector<vec> mat;
const int Nmax = 50;
int N;
ll A[Nmax];

int main(){
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> A[i];
	}

	ll ans = 0;
	while(true){
		ll x = 0;
		for(int i=0; i<N; i++){
			x += A[i]/N;
		}
		ans += x;
		for(int i=0; i<N; i++){
			A[i] += x - (A[i]/N)*(N+1);
		}

		bool f = true;
		for(int i=0; i<N; i++){
			f = f && A[i] < N;
		}

		if(f) break;
	}

	cout << ans << endl;

	return 0;
}
