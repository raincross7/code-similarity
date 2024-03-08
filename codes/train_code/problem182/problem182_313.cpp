#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <iomanip>	
#include <deque>
#include <set>
#define rep(i,a,b) for(int i=a;i<b;++i)
#define rrep(i,a,b) for(int i=a;i>=b;--i)
#define fore(i,a) for(auto &i:a)
#define INF INT_MAX/2;
typedef long long ll;
using namespace std;
using vi = vector<int>;
using vll = vector<ll>;
ll mod = 1e9 + 7;
//ll llmax = 10000000000000000000ll;
using namespace std;
using Graph = vector<vector<int>>;
Graph G;
const int AMAX = 100000;
//四方向への移動ベクトル
const int dx[4] = { 1,0,-1,0 };
const int dy[4] = { 0,1,0,-1 };
/*
//入力
int H, W;
vector<string> field;

//探索
bool seen[510][510];	// seen[h][w] := マス(h,w)が検知済みかどうか

void dfs(int h, int w)
{
	seen[h][w] = true;

	//四方向を検索
	for (int dir = 0; dir < 4; dir++)
	{
		int nh = h + dx[dir];
		int nw = w + dy[dir];

		//場外アウトしたり、移動先が壁の場合はスルー
		if (nh < 0 || nh >= H || nw < 0 || nw <= W)continue;
		if (field[nh][nw] == '#')continue;

		//移動先が探索済みの場合
		if (seen[nh][nw])continue;

		//再帰的に探索
		dfs(nh, nw);
	}
}

/*int cnt_digit(ll N)
{
	int digit = 0;

	while (N > 0)
	{
		N /= 10;
		digit++;
	}
	return digit;
}




int n;
vll a;

ll solve(bool isp)
{
	ll sum = 0ll;
	ll ret = 0ll;

	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		if (isp and sum <= 0)
		{
			ret += -sum + 1;
			sum = 1ll;
		}
		if (not isp and sum >= 0)
		{
			ret += sum + 1;
			sum = -1ll;
		}
		isp ^= 1;
	}
	return ret;
}


vector<bool> seen;
void dfs(const Graph & G, int v)
{
	seen[v] = true;	//v を訪問済みにする

	// vから行ける各頂点 next_vについて
	for (auto next_v : G[v])
	{
		if (seen[next_v])continue;	//next_vが探索済みだったらスルー
		dfs(G, next_v);//再帰的に探索
	}
}


 * 最大公約数計算
 
ll gcd(ll a, ll b)
{
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

ll lcm(ll a, ll b)
{
	ll g = gcd(a, b);

	return a / g * b;
}

struct union_find
{
	vector<int> par, r;
	union_find(int n)
	{
		par.resize(n);
		r.resize(n);
		init(n);
	}


void init(int n)
{
	for (int i = 0; i < n; i++) par[i] = i;
	for (int i = 0; i < n; i++) r[i] = 0;
}

int find(int x)
{
	if (par[x] == x)return x;
	else return find(par[x]);
}

void unite(int x, int y)
{
	x = find(x);
	y = find(y);

	if (r[x] < r[y])
	{
		par[x] = y;
	}
	else
	{
		par[y] = x;
		if (r[x] == r[y])
		{
			r[x]++;
		}
	}
}

bool same(int x, int y)
{
	return find(x) == find(y);
}

};


string SS, T;
string solve()
{
	
	int N = SS.length();
	int M = T.length();
	set<string> ans;
	for (int R = N; R >= M; R--)
	{
		int L = R - M;

		int ok = 1;
		for (int j = 0; j < M; j++)
		{
			if (SS[L + j] != '?' && SS[L + j] != T[j])
			{
				ok = 0;
			}

			if (ok)
			{
				string S;
				for (int i = 0; i < N;i++) S += SS[i];
				for (int i = 0; i < M; i++) S[L+i] = T[i];
				for (int i = 0; i < N; i++) if (S[i] == '?')S[i] = 'a';
				ans.insert(S);
			}
		}
		
	}
	if (ans.size() == 0)return "UNRESTORABLE";
	return *(ans.begin());

}
*/
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int A,B,C,D;
	cin >> A >> B >> C >> D;

	int Left = A + B;
	int Right = C + D;
	if (Left > Right) {
		cout << "Left" << endl;
	}
	else if (Left < Right) {
		cout << "Right" << endl;
	}
	else {
		cout << "Balanced" << endl;
	}
	
	

	
	/*ll N;
	cin >> N;
	vector<int> A(N);
	vector<int> B(N);
	vector<int> C(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < N; i++)
	{
		cin >> B[i];
	}
	for (int i = 0; i < N; i++)
	{
		cin >> C[i];
	}
	
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	sort(C.begin(), C.end());

	ll ans = 0;
	for (int i = 0; i < N; i++)
	{
		ll pre = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
		ll over = C.end() - upper_bound(C.begin(), C.end(), B[i]);
		ans += pre * over;
	}
 	//ll ans = sqrt(N);
	cout << ans << endl;
	/*for (ll i = 0; i < N ; i++)
	{
		ll ans = i * i;
		if (ans > N)
		{
			cout << (i - 1ll) * (i - 1ll) << endl;
			break;
		}
	}*/

}

