/************************************/
/* NoobM							*/
/* File Name : cha.cpp				*/
/* Date : 13.07.2020 02:20:47 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

void solve() {
	ll n, m;
	cin >> n >> m;
	
	ll g = n * m;
	
	if(n == 1 || m == 1) cout << 1 << endl;
	else cout << g / 2 + g % 2<< endl;
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	
	int t = 1;
	//cin >> t;
	
	while (t--) {
		solve();
	}
    return 0;
}
