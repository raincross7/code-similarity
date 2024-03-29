#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <set>
#include <map>
#include <algorithm>

#define int long long
#define MOD7 1000000007
#define MOD9 1000000009

#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, a, n) for (int i = (a); i <= (n); i++)
#define all(a) (a).begin(), (a).end()

using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int nextInt() {int a; cin >> a; return a;}
char nextChar() {char a; cin >> a; return a;}
double nextDouble() {double a; cin >> a; return a;}
string nextString() {string a; cin >> a; return a;}

void inputVector(vector<int> &v, int &n) {rep(i,n){v.push_back(nextInt());}}
void inputVector(vector<double> &v, int &n) {rep(i,n){v.push_back(nextDouble());}}
void inputVector(vector<string> &v, int &n) {rep(i,n){v.push_back(nextString());}}

signed main() {
    int n;
    cin >> n;

    rep(i, n) {
	int y, m, d;
	cin >> y >> m >> d;

	int ret = 0;
	while (d <= (y % 3 == 0 || m % 2 ? 20 : 19)) {
	    ret++;
	    d++;
	}
	m++;
	while (m <= 10) {
	    ret += (y % 3 == 0 || m % 2 ? 20 : 19);
	    m++;
	}
	y++;
	while (y <= 999) {
	    ret += y % 3 ? 195 : 200;
	    y++;
	}
	cout << ret << endl;
    }

    return 0;
}