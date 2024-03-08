
#include<bits/stdc++.h>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
const int inf = 1e9;
const int mod = 1e9+7;
typedef long long ll;
typedef pair<ll,int> P;
typedef set<int> S;
int main(){
	cout << fixed << setprecision(10);
	int n;
	cin >> n;
	map<int,int> mii;
	rep(i,n){
		int x;
		cin >> x;
		mii[x]++;
		mii[x+1]++;
		mii[x-1]++;
	}
	vector<pair<int,int>> vpi;
	for(auto u : mii){
		vpi.push_back({u.second,u.first});
	}
	sort(vpi.rbegin(),vpi.rend());
	cout << vpi[0].first << endl;
	return 0;
}