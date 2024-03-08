#include <iostream>
#include <iomanip>
#include <utility>
#include <cmath>
#include <random>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

#define rep(i,n) for(int i = 0; i<n; ++i)
#define REP(i,n) for(int i = 1; i<=n; ++i)
#define all(x) begin(x),end(x)
#define show(obj) {for(auto x:obj)cout<<x<<' ';cout<<endl;}
#define line "----------"
typedef long long ll;
typedef pair<int,int> ip;
typedef pair<ll,ll> lp;
const int inf = 1001001000;
const ll INF = 1LL<<60;
const int MOD = (int)1e9 + 7;

int main(){
	int N;cin>>N;
	vector<int> A(N), B(N),need(N);
	rep(i,N)cin>>A[i]>>B[i];
	ll ans = 0;
	for(int i = N-1; i>=0; --i){
		ll t = (A[i] + ans)%B[i];
		if(t == 0)t = B[i];
		ll e_ans = B[i] - t;
		ans += e_ans;
	}
	cout<<ans<<endl;
	return 0;
}