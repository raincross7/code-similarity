#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
const int maxn = 1e9 + 5;
#define INF 100000000000
const int MOD = 1e9+7;
const double PI = 3.14159265358979323846264338;
const ll MAXN = 1e18;



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	char a,b;
	cin >> a >> b;
	int suma = a;
	int ama = b;
	if(suma > ama){
		cout << ">" << endl;
	}else if(suma < ama){
		cout << "<" << endl;
	}else{
		cout << "=" << endl;
	}
	return 0;
}

