#include <bits/stdc++.h>
#define rep(i,n) for(int i=(0);i<(n);i++)

using namespace std;

typedef long long ll;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, h, w;
	cin >> n >> h >> w;

	int ans = 0;
	rep(i, n){
		int a, b;
		cin >> a >> b;
		if(a >= h && b >= w) ans++;
	}

	cout << ans << endl;
}
