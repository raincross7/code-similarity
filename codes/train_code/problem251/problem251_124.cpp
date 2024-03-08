#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
	int n;
	cin >> n;
	vector<int> h(n);
	rep(i,n) cin >> h[i];
	int sum = 0;
	int now = 0;
	int mx = 0;
	rep(i,n-1){
		if(h[i+1] <= h[i]){
			sum++;
		}
		else{
			mx = max(mx,sum);
			sum = 0;
		}
		mx = max(mx,sum);
	}
	cout << mx << endl;
}