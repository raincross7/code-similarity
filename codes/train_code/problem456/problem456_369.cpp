#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
const int maxn = 1e5 + 5;
const int inf = 1000000000;
const int MOD = 1e9+7;
const double PI = 3.14159265358979323846264338; // double PI = 4*atan(1);



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	//ifstream cin (".in");
	//ofstream cout (".out");
	int n;
	cin >> n;
	std::vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	std::vector<int> rev(n);
	for(int i=0; i<n; i++)rev[a[i]-1]=i+1;
	for(int i=0; i<n; i++)cout << rev[i] << endl;
	return 0;	
}    



