#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long 
#define endl "\n"
#define all(x) (x).begin(),(x).end()
const int MOD = 1e9+7;
const int mxN = 2e5+3;

void solve(){
	string s;
	cin >> s;
	int ans = 0;
	int n = (int)s.length();
	for(int i = 0; i < n; ++i){
		ans += (s[i] - '0');
	}
	if(ans % 9 == 0)cout << "Yes" << endl;
	else cout << "No" << endl;
}

int32_t main(){
	IO;
	
	int nT = 1;
	//cin >> nT;
	for(int i = 1; i <= nT; ++i)
		solve();
	return 0;
}
