
#include "bits/stdc++.h"
#include <unordered_set>
using namespace std;

#define DEBUG(x) cout<<#x<<": "<<x<<endl;
#define DEBUG_VEC(v) cout<<#v<<":";for(int i=0;i<v.size();i++) cout<<" "<<v[i]; cout<<endl

typedef long long ll;
#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
#define pii pair<int,int>
#define pis pair<int,string>
#define psi pair<string,int>
const int inf = 1000000001;
const ll INF = 1e16;
#define MOD 1000000007
#define mod 1000000009
#define pi 3.14159265358979323846
#define Sp(p) cout<<setprecision(15)<<fixed<<p<<endl;
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
int dx2[8] = { 1,1,0,-1,-1,-1,0,1 }, dy2[8] = { 0,1,1,1,0,-1,-1,-1 };

int main() {
	int h, w, d, i, j, k;
	cin >> h >> w >> d;
	vector< vector<char> > color(h, vector<char>(w));
	vector< vector<char> > cl = { {'R','Y'},{'B','G'} };
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			int y = i + j;
			int x = h - i + j;
			int i2 = (y / d) % 2, j2 = (x / d) % 2;
			if (i2 < 0) {
				i2 += 2;
			}
			if (j2 < 0) {
				j2 += 2;
			}
			color[i][j] = cl[i2][j2];
		}
	}
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			cout << color[i][j];
		}
		cout << endl;
	}


}