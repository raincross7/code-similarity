#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(n) begin(n), end(n)
using ll = long long;
using namespace std;

int main(){
	int a, b, k;
	cin >> a >> b >> k;
	rep(i, k){
		if(i % 2 == 0){
			if(a % 2 == 1){
				a--;
			}
			b += a/2;
			a /= 2;
		}else{
			if(b % 2 == 1){
				b--;
			}
			a += b/2;
			b /= 2;
		}
	}
	cout << a << " " << b << endl;
	return 0;
}