#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<=n;i++)
typedef long long ll;

int main(){
	int n,x,t;
	cin >> n >> x >> t;
	int ans = t* ((n + x - 1) / x);
	cout << ans << endl;
    return 0;
}

