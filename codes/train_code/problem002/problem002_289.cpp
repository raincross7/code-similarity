#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main(){
	int diff = 9;
	int total = 0;
	int menu;
	int cnt = 0;
	rep(i, 5){
		int d;
		cin >> d;

		if(d%10 == 0){
			total += d;
			cnt++;
		}else{
			diff = min(diff, d%10);
			d+=9;
			total += (d/10)*10;
		}
	}

	if(cnt == 5) cout << total << endl;
	else cout << total-(10-diff) << endl;
	return 0;
}