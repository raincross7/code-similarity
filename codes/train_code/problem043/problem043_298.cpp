#include <bits/stdc++.h>
#include <iostream>	
#define pb push_back
#define mp make_pair
#define Red ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for(int i = 0; i < n; ++i)
#define repr(i,n) for(int i = n - 1; i >= 0; --i)
#define Rep(i, a, n) for(int i = (a); i <=(n); ++i)
#define repst(i, n) for(auto it = n.begin(); it != n.end(); ++it)
#define Repr(i, a, n) for(int i = (n); i >= (a); --i)
typedef long long ll;

const int inf = int(2e9);
const int mod = inf + 7;
using namespace std;

void solve()
{	
	int n, k;
	cin >> n >> k;
	cout << max(0, n - k + 1);
}

int main()
{
	Red;
	solve();
	return 0;
}