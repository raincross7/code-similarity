#include <bits/stdc++.h>
using namespace std;
#define dhoom ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  
typedef long long ll;
typedef long double ld;
const ll inf = 1e18;
const int nax = 2e6 + 7;
const ll mod = 1e9 + 7;
//ll tree[4 * nax];
//9uS-22RSwk7gQqh
ll gcd(ll a , ll b){
	if(b == 0) return a;
	return gcd(b , a % b);	
}
ll lcm(ll a , ll b){
	ll g = gcd(a , b);
	ll lc = (a/g) * b;
	return lc;
}
//char a[55][55];
int dx[] = {1,0,-1,0,1,1,-1,-1};
int dy[] = {0,1,0,-1,1,-1,-1,1};
ll a[100];
int main()
{
	dhoom;
	int a , b , c , d;
	cin >> a >> b >> c >> d;
	if(a + b > c + d)
		cout << "Left" << endl;
	else if(a + b < c + d)
		cout << "Right" << endl;
	else 
		cout << "Balanced" << endl;
	return 0;
}
