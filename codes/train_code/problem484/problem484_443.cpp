#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<limits.h>
#include<cmath>
#include<queue>
#include<stack>

#include<stdio.h>
#include<stdlib.h>

#define rep(i,n) for(ll i = 0; i < (ll)n; i++)
#define swap(a,b) a^=b;b^=a;a^=b;
#define chmax(a,b) {if(a < b) a = b;}
#define chmin(a,b) {if(a > b) a = b;}

using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
	//Program Start	

	string S, T;
	cin >> S >> T;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] != T[i]) {
			cout << "No" << endl;
			goto EndPoint;
		}
	}
	cout << "Yes" << endl;

EndPoint:;

	//Program End
#ifndef DEBUG
	system("pause");
#endif // !DEBUG

	return 0;
}


