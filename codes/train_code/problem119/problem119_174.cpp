#include <bits/stdc++.h>
#define load ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
#define ll long long
#define ull unsigned long long
#define fori(i,n) for (int i=0; i<int(n);i++)
#define srt(v) sort(v.begin(), v.end())
#define MOD 1000000007
const int INF = 1e9;
const double PI = 3.14159265358979323846;
ll gcd(ll a, ll b) {
    return b != 0 ? gcd(b, a % b) : a;
}
ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}
ll spow(ll base, ll exp){
	ll ans = 1;
	for(ll i=0;i<exp;i++) ans = ans * base % MOD;
	return ans;
}
ll divide(ll a, ll b){
	return a * spow(b, MOD-2) % MOD;
}
void solve(){
	
}

int main(){
	//~ load;
	//~ int t;
	//~ cin >> t;
	//~ while(t--){
		//~ solve();
	//~ }
	
	string s, t;
	cin >> s >> t;
	
	int ans = INT_MAX;
	for (int i = 0; i<= s.size()-t.size(); i++){
		int diff = 0;
		
		for(int j=0; j<t.size(); j++){
			if (t[j] != s[i + j]){
				diff++;
			}
		}
		ans = min(ans, diff);
	}
	cout << ans << "\n";
}

