#include <bits/stdc++.h>
// iostream is too mainstream
#include <cstdio>
// bitch please
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <cmath>
#include <iomanip>
#include <time.h>
#define dibs reserve
#define OVER9000 1234567890123456789LL
#define ALL_THE(CAKE,LIE) for(auto LIE =CAKE.begin(); LIE != CAKE.end(); LIE++)
#define tisic 47
#define soclose 1e-8
#define chocolate win
// so much chocolate
#define patkan 9
#define ff first
#define ss second
#define abs(x) ((x < 0)?-(x):x)
#define uint unsigned int
#define dbl long double
#define pi 3.14159265358979323846
using namespace std;
// mylittledoge

typedef long long cat;

#ifdef DONLINE_JUDGE
	// palindromic tree is better than splay tree!
	#define lld I64d
#endif

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout << fixed << setprecision(10);
	int W,H;
	cin >> W >> H;
	vector<cat> cW(W), cH(H);
	for(int i =0; i < W; i++) cin >> cW[i];
	for(int i =0; i < H; i++) cin >> cH[i];
	sort(begin(cW),end(cW));
	sort(begin(cH),end(cH));
	int a =0, b =0, w =W, h =H;
	cat ans =0;
	for(int i =0; i < W+H; i++) {
		if(a == W || (b < H && cW[a] > cH[b])) {
			ans +=(w+1)*cH[b];
			h--;
			b++;
		}
		else {
			ans +=(h+1)*cW[a];
			w--;
			a++;
		}
	}
	cout << ans << "\n";
	return 0;}

// look at my code
// my code is amazing
