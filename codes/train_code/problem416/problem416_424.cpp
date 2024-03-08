#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <iomanip>
#include <limits>
#include <list>
#include <queue>
#include <tuple>
#include <map>
#include <stack>
#include <set>
using namespace std;
#define MOD (long long int)(1e9+7)
#define ll long long int
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define reps(i,n) for(int i=1; i<=(int)(n); i++)
#define REP(i,n) for(int i=n-1; i>=0; i--)
#define REPS(i,n) for(int i=n; i>0; i--)
#define INF (int)(1123456789)
#define LINF (long long int)(112345678901234567)
#define chmax(a, b) a = (((a)<(b)) ? (b) : (a))
#define chmin(a, b) a = (((a)>(b)) ? (b) : (a))
#define all(v) v.begin(), v.end()

const int N = (int)3e5;

ll mpow(ll a, ll b){
	if(b==0) return 1;
	else if(b%2==0){ll memo = mpow(a,b/2); return memo*memo%MOD;}
	else return mpow(a,b-1) * a % MOD;
}
ll gcd(ll a, ll b){
	if(b==0) return a;
	else return gcd(b, a%b);
}
vector<ll> kaijo_memo;
ll kaijo(ll n){
	if(kaijo_memo.size() > n) return kaijo_memo[n];
	if(kaijo_memo.size() == 0) kaijo_memo.push_back(1);
	while(kaijo_memo.size() <= n) kaijo_memo.push_back(kaijo_memo[kaijo_memo.size()-1] * kaijo_memo.size() % MOD);
	return kaijo_memo[n];
}
ll nCr(ll n, ll r){
	if(n < r || r < 0) return 0;
	ll ret = 1;
	ret *= kaijo(n); ret %= MOD;
	ret *= mpow(kaijo(r), MOD-2); ret %= MOD;
	ret *= mpow(kaijo(n-r), MOD-2); ret %= MOD;
	return ret;
}

int main(void){
	vector<int> ans;
	int now = -1;
	while(ans.size() < 9){
		int count = 0;
		cout<<"? ";
		rep(i,ans.size()){
			cout<<ans[i];
			count++;
		}
		if(now == -1){
			cout<<4;
			count++;
		}else{
			cout<<now;
			count++;
		}
		rep(i,18-count){
			cout<<"9";
		}
		cout<<endl;
		char yn;
		cin>>yn;

		if(yn == 'N'){
			if(now == -1){
				now = 5;
			}else if(now == 3){
				ans.push_back(4);
				now = -1;
			}else if(now == 8){
				ans.push_back(9);
				now = -1;
			}else{
				now++;
			}
		}else{
			if(now == -1){
				now = 0;
				if(ans.size() == 0) now = 1;
			}else{
				ans.push_back(now);
				now = -1;
			}
		}

	}

	int keta = 10;
	if(ans[0] != 9){
		reps(i, 9){
			cout<<"? ";
			rep(j,i){
				cout<<9;
			}
			cout<<endl;

			char yn;
			cin>>yn;
			if(yn == 'Y'){
				keta = i;
				break;
			}
		}		
	}else{
		reps(i,9){
			cout<<"? ";
			rep(j,i+1){
				cout<<1;
			}
			cout<<endl;

			char yn;
			cin>>yn;
			if(yn == 'N'){
				keta = i;
				break;
			}
		}
	}

	ans.push_back(0);
	cout<<"! ";
	rep(i,keta){
		cout<<ans[i];
	}
	cout<<endl;
	return 0;
}