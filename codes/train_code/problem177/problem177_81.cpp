#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <math.h>
#include <string>
#include <numeric>
#include <queue>
#include <cstdio>
#include <cstring>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;++i)
#define rep1(i,n) for(ll i=1;i<n;++i)
#define mrep(i,n) for(ll i=n;i>=0;--i)
#define all(a) (a).begin(),(a).end()
#define vl vector<ll>
#define vvl vector<vector<ll> >
#define vb vector<bool>
#define vvb vector<vector<bool> >
#define pl pair<ll,ll>
#define inf 1001001001001001000
//#define mod 1000000007
#define mod 998244353
#define pi 3.1415926535
using namespace std;
struct __INIT {
	__INIT() {
		cin.tie(0);
		ios::sync_with_stdio(false);
		cout << fixed << setprecision(15);
	}
}__init;


int main(void) {
	string s;
	cin >> s;
	vb cs(26, 0);
	vl cnts(26, 0);
	for (char c : s) {
		cs[c - 'A'] = true;
		cnts[c - 'A']++;
	}
	ll s1 = 0, s2 = 0;
	rep(i, 26) {
		s1 += cs[i];
	}
	if (s1 == 2) {
		bool dame = false;
		rep(i, 26) {
			if (cs[i] && cnts[i] != 2) {
				dame = true;
				break;
			}
		}
		if (dame == false) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}
