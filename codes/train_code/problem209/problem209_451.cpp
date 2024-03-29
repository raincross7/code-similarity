#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define pb push_back
#define sz(x) (int)x.size()
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define F first
#define S second
#define watch(x) cerr << "\n" << (#x) << " = " << (x) << "\n"
using namespace std;
int nodes, edges, cnt, ans;
vector<int> adj[200001];
bool visited[200001];

void dfs(int src){
	visited[src] = true;
	cnt++;
	for(int x: adj[src]){
		if(!visited[x])
			dfs(x);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> nodes >> edges;
	int x, y;
	for(int i = 0; i < edges; ++i){
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 1; i <= nodes; ++i){
		cnt = 0;
		dfs(i);
		ans = max(ans, cnt);
	}
	cout << ans;
	return 0;
}