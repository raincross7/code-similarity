#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define debug(a) cerr << #a << ": " << a << endl
#define sz(a) int(a.size())
#define rep(i,n) for(int i=0;i<n;i++)
#define forr(i, st, en) for(int i = st; i <= en; i++)
#define all(v) (v).begin(),(v).end()
#define X first
#define Y second
#define pb push_back
#define fast cin.tie(0); ios::sync_with_stdio(false)
#define vi vector<int>
#define vii vector<vector<int>>

int32_t main(){ fast;
	string s; cin>>s;
	vector<string> a = {"RRR", "RRS", "RSR", "SRR", "SSS", "SSR", "SRS", "RSS"};
	vector<int> ans = {3, 2, 1, 2, 0, 1, 1, 1};
	debug(sz(ans));
	debug(sz(a));
	rep(i, sz(a)){
		if(s == a[i]){
			cout<<ans[i];
			return 0;
		}
	}
}
