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
typedef long long ll;
typedef pair<int,int> ip;
typedef pair<ll,ll> lp;
const int inf = 1001001000;
const ll INF = 1LL<<60;
const int MOD = (int)1e9 + 7;

int main(){
	int n,k;
	cin>>n>>k;
	if(n*2<k){
		cout<<0<<endl;
		return 0;
	}
	ll ans = pow(n/k,3);
	if(k%2==0){
		ans += pow(n/k+(n%k>=k/2), 3);
	}
	cout<<ans<<endl;
	return 0;
}
