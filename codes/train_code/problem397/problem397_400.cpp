#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
	ll n;
	cin >> n;
	ll sum = 0;
	for(ll i = 1; i <= n; i++){
		sum += (i)*((n/i)*(n/i+1)/2);
	}
	cout << sum << endl;
}