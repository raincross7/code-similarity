/*
ID: anonymo14
TASK: wormhole
LANG: C++                 
*/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpii;

#define F first
#define S second
#define PU push
#define PUF push_front
#define PUB push_back
#define PO pop
#define POF pop_front
#define POB pop_back

#define REP(i,a,b) for(int i=a; i<=b; i++)

#define MOD 1000000007

bool cmp(pair<int,int> &a,pair<int,int> &b){
	return a.F<b.F;
}

void solve(int test_case) {//233
	int n,d;
	cin>>n>>d;
	vector<vector<double>> arr(n, vector<double>(d));	
	for(auto &i:arr)for(auto &j:i)cin>>j;
	int cnt = 0;
	REP(i,0,n-1){
		REP(j,i+1,n-1) {
			double sum  =0;
			REP(k,0,d-1)sum+=pow(arr[i][k]-arr[j][k],2);
			sum=sqrt(sum);
			if(ceil(sum)==sum)cnt++;
		}
	}
	cout<<cnt;
}

int main() {
	
	////// FILE BASED IO////
	//freopen("wormhole.in", "r", stdin);
	//freopen("wormhole.out", "w", stdout);
	///////////////
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t=1;
	//cin>>t;
	REP(i,1,t) {
		solve(i);
	}
	return 0;
}	
