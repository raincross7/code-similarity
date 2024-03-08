#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <stack> // s.top()
#include <bitset>
#include <queue> // s.front()
using namespace std;

typedef long long Int;
typedef pair<Int,Int> P;
#define print(x) cout<<(x)<<endl

#define INF10 10000000000
#define INF5 100000
#define EPS 1e-10
#define MOD 1000000007



int main() {
	int N, H, W; cin >> N >> H >> W;
	vector<int> A; vector<int> B;
	for (int i = 0; i < N; i++) {
		int ipta, iptb;
		cin >> ipta >> iptb;
		A.push_back(ipta); B.push_back(iptb);
	}
	int score = 0;
	for (int i = 0; i < N; i++) {
		if (A[i] >= H && B[i] >= W)score++;
	}
	print(score);





	



	return 0;
}