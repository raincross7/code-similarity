#include <bits/stdc++.h>
//#include <math.h>
using namespace std;

#define INF 1.1e9
#define LINF 1.1e18
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define BIT(x,n) bitset<n>(x)
#define PI 3.14159265358979323846

typedef long long ll;
typedef pair<int,int> P;
typedef pair<int,P> PP;

//-----------------------------------------------------------------------------

int n;
vector<int> ans;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	cin>>n;
	int sum=0,i=1;
	while(sum<n) {
		sum+=i;i++;
	}
	if(sum==n) {
		FOR(j,1,i) cout<<j<<endl;
	}
	else {
		int tmp=sum-n;
		FOR(j,1,i) if(j!=tmp) cout<<j<<endl;
	}

	return 0;
}
