#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<math.h>
using namespace std;
typedef long long ll;
#define int long long
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef priority_queue<int> PQ;
#define fore(i,a) for(auto &i:a)
#define REP(i,n) for(int i=0;i<n;i++)
#define eREP(i,n) for(int i=0;i<=n;i++)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define eFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define SORT(c) sort((c).begin(),(c).end())
#define rSORT(c) sort((c).rbegin(),(c).rend())
#define LB(x,a) lower_bound((x).begin(),(x).end(),(a))
#define UB(x,a) upper_bound((x).begin(),(x).end(),(a))
#define INF 1000000000
#define LLINF 9223372036854775807
#define mod 1000000007
//vector<vector<int> > dp;
//vector<vector<vector<int> > > vvvi;
//dp=vector<vector<int> >(N, vector<int>(M,0));
//vector<pair<int,int> > v;
//v.push_back(make_pair(x,y));
//priority_queue<int,vector<int>, greater<int> > q2;



signed main(){
cin.tie(0);
ios::sync_with_stdio(false);

	int N;
	string S;
	cin >> N >> S;
	int bsum = 0;
	REP(i, 2 * N) {
		if (i % 2==0) {
			if (S[i] == 'B')S[i] = 'W';
			else S[i] = 'B';
		}
		if (S[i] == 'B')bsum++;
	}
	if (bsum != N) {
		cout << 0 << endl;
     	return 0;
	}
	int cnt = 0;
	int ans = 1;
	REP(i, 2 * N) {
		if (S[i] == 'B') {
			ans *= cnt;
			ans %= mod;
			cnt--;
		}
		else {
			cnt++;
		}
	}
	eFOR(i, 1, N) {
		ans *= i;
		ans %= mod;
	}

	cout << ans << endl;

	return 0;
}

