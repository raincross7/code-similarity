#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define ld long double
using namespace std;
const int N = 1e6 + 5;
const int MOD = 1e9 + 7;

int main(){
	fast;
	ll a, b;
	cin >> a >> b;
	if(abs(a - b) <= 1) cout << "Yay!";
	else cout << ":(";
	return 0;
}
