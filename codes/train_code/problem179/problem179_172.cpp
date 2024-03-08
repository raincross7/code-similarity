#include<bits/stdc++.h>
#define LL long long
#define REP(i,n) for(int i=0;i<(n);++i)
#define PER(i,n) for(int i=n-1;i>=0;--i)
#define REPA(i,n) for(int i=1;i<(n);++i)
#define foreach(i, n) for(auto &i:(n))
#define PII pair<int,int>
#define PLI pair<long long, int>
#define PLL pair<long long, long long>
#define MOD ((LL)1e9+7) 
#define INF ((LL)1e9+7)
#define INFLL ((LL)1e18)
#define ALL(x) (x).begin(),(x).end()
#define BIT(x) (1LL << (x))
using namespace std;
template<class t, class u> bool chmax(t &a, u b){if(a<b){a=b;return true;}return false;}
template<class t, class u> bool chmin(t &a, u b){if(a>b){a=b;return true;}return false;}

LL modpow(LL x, LL b){
	LL res = 1;
	while(b){
		if(b&1)res = res * x % MOD;
		x = x * x % MOD;
		b>>=1;
	}
	return res;
}

LL modinv(LL x){
	return modpow(x, MOD-2);
}

int main(){
	int N, K;
	cin >> N >> K;
	vector<LL> line(N);
	foreach(i, line)cin>>i;
	LL ans = 0;
	LL sum = 0;
	foreach(i, line)sum += max(0LL, i);
	vector<LL> imos(N+1, 0);
	vector<LL> imos2(N+1, 0);
	REP(i, N)imos[i+1]=imos[i] + min(0LL, line[i]);
	REP(i, N)imos2[i+1]=imos2[i] + max(0LL, line[i]);
	for(int i=K;i<=N;++i){
		chmax(ans, sum + imos[i] - imos[i-K]);
		chmax(ans, sum - imos2[i] + imos2[i-K]);
	}

	cout << ans << endl;

	return 0;
}
