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
#define INF ((int)1e9+7)
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
	vector<bool> used(N, false);
	LL sum = 0;
	LL ans = 0;
	priority_queue<LL, vector<LL>, greater<LL>> pq;
	LL val = 0;
	vector<PLL> line(N);
	foreach(i, line)cin>>i.second>>i.first;
	sort(ALL(line), greater<PLL>());
	REP(i, N){
		if(i>=K){
			if(pq.empty())break;
			sum -= pq.top();
			pq.pop();
		}
		if(!used[line[i].second]){
			++val;
			used[line[i].second] = true;
		}else{
			pq.push(line[i].first);
		}
		sum += line[i].first;
		chmax(ans, sum + val * val);
	}
	cout << ans << endl;
	return 0;
}
