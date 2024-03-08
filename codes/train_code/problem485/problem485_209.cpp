#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<climits>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<bitset>
#include<iomanip>
using namespace std;

#define rep(i,j,n) for(int i=(j);i<(n);++i)
#define erep(i,j,n) for(int i=(j);i<=(n);++i)
#define all(i) i.begin(),i.end()
#define rall(i) i.rbegin(),i.rend()
#define INF 1e9
const int mod = 1e9 + 7;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef vector<vector<string>> vvs;
typedef pair<int, int> pi;
typedef long long i64;

int main() {
	i64 x, y;
	cin >> x >> y;
	if (abs(x - y) <= 1) cout << "Brown\n";
	else cout << "Alice\n";
}