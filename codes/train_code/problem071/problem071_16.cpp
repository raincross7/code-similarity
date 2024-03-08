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
	int N; string s,t;
	cin>>N>>s>>t;
	int c = min(s.size(),t.size());
	int e_ans = 0;
	rep(i,c+1){
		string tt = s.substr(s.size()-i,i);
		if(tt == t.substr(0,i))e_ans = i;
	}
	cout<<max(N, (int)(s.size()+t.size())-e_ans)<<endl;
	return 0;
}