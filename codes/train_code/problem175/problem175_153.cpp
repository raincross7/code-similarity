#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iterator>
#include <ctime>
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iomanip>
#include <limits>
#include<functional>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>
#include <numeric>
//#include<unordered_map>
#define inf  2e9
#define seed 131
#define pi acos(-1)
#define mem(a,b) memset(a,b,sizeof(a))
#define lowbit(x) ((x)&(-x))
#define lrtnb srand(unsigned(time(NULL)))
#define lrtlh ios::sync_with_stdio(0)
#define lowb(a,n,x) lower_bound(a,a+n,x) - a
#define uppb(a,n,x) upper_bound(a,a+n,x) - a
#define lson l,mid,i<<1;
#define rson mid+1,r,i<<1|1;
#define ALL(x) x.begin(),x.end()
#define inv inline void
#define INS(x) inserter(x,x.begin())
using namespace std;
typedef long long ll;
typedef long double ld;
typedef priority_queue<int> pqi;
typedef priority_queue<ll> pql;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef queue<int> qi;
typedef queue<ll> ql;
typedef stack<int> si;
typedef stack<ll> sl;
typedef set<int> Si;
typedef set<ll> Sl;
ll gcd(ll n, ll m) { long long r; if (n < m)swap(n, m); while (m) { r = n % m; n = m; m = r; }return n; }
ll lcm(ll b, ll y) { return b * y / gcd(b, y); }
double das(double x1, double y1, double x2, double y2) { double ans = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2); return sqrt(ans); }
double random(double start, double en) { return start + (en - start)*rand() / (RAND_MAX + 1.0); }
inline void read(int &n) { char c = '+'; int x = 0; bool flag = 0; while (c<'0' || c>'9') { c = getchar(); if (c == '-')flag = 1; }while (c >= '0'&&c <= '9')x = x * 10 + c - 48, c = getchar(); n = flag == 1 ? -x : x; }
int n;
int main(){
	int n;
	scanf("%d", &n);
	ll flag = n;
	ll a, b;
	ll sum = 0;
	ll bb=inf;
	for (int i = 0; i < n; i++) {
		scanf("%lld%lld", &a, &b);
		if (a == b)
			flag--;
		sum += a;
		if (a > b)
			bb = min(bb, b);
	}
	if (flag) {
		cout << sum - bb << endl;
	}
	else 
	cout << 0 << endl;
	//system("pause");
}