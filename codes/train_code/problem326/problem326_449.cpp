#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <utility>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
/* 大文字を小文字に変換 tolower*/
/* 小文字を大文字に変換 toupper*/
 
int main () {
	int n,k,x,y;
	cin >> n >> k >> x >> y;
	int ans = 0;
	rep(i, n) {
		if (i < k) ans += x;
		else ans += y;
	}
	cout << ans << endl;
}
