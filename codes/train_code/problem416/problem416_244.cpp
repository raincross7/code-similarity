#include <bits/stdc++.h>
using namespace std;
#define e1 first
#define e2 second
#define pb push_back
#define mp make_pair
#define boost ios_base::sync_with_stdio(false)
#define eb emplace_back
#define OUT(x) {cout << x; exit(0); }
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define scanf(...) scanf(__VA_ARGS__)?:0
typedef long long int ll;
typedef unsigned long long ull;
typedef pair <int, int> PII;
typedef pair <ll, ll> PLL;
typedef pair <PLL, int> PLLI;
typedef pair <PLL, PLL> PP;
typedef pair <PII, int> PPI;
typedef pair <ll, int> PLI;
typedef unsigned int ui;
const int mod = 1e9+7;
const int inf = 1e9+9;
const ll MOD = 1e9+696969;
const long long INF = 1e18+3;
const ll most = 1e9;

bool query(ll val){
	std::cout << "? " << val << std::endl;
	
	char c;
	std::cin >> c;
	
	return (c == 'Y');
}
 
int main(){
	ll length = 1;
	
	if(!query(9)){
		for(ll i = 10; i <= most; i *= 10){
			if(query(i * 10 - 1)){
				length = i;
				break;
			}
		}
	}
	
	if(!query(most)){
		for(ll i = most; i >= 1; i /= 10){
			if(query(i)){
				length = i;
				break;
			}
		}
	}
	
	ll l = length;
	ll r = length * 10 - 1;
	
	ll best = r;
	
	while(l <= r){
		ll mid = (l + r) / 2;
		
		if(query(mid * 10)){
			r = mid - 1;
			best = mid;
		} else {
			l = mid + 1;
		}
	}
	
	std::cout << "! " << best << std::endl;
}
