#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<sstream>
using namespace std;
typedef  long long int lint;
typedef pair<int, int> IP;
typedef pair<lint, lint> LLP;
typedef pair<char, char>CP;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define sort(v) sort((v).begin(), (v).end())
#define reverse(v) reverse((v).begin(), (v).end())
#define upper(v,hoge) upper_bound(v.begin(),v.end(),hoge)
#define lower(v,hoge) lower_bound(v.begin(),v.end(),hoge)
#define llower(v,hoge) *lower_bound(v.begin(), v.end(), hoge)
#define lupper(v,hoge) *upper_bound(v.begin(), v.end(), hoge)
#define toupper(S) transform(S.begin(),S.end(),S.begin(),toupper)
#define tolower(S) transform(S.begin(),S.end(),S.begin(),tolower)


int main() {
	int N;
	cin >> N;
	vector<int>A(N);
	rep(i, N) {
		cin >> A[i];
	}
	int cnt = 1;
	int ans = 0;
	for (int i = 1; i < N; i++) {
		if (A[i] == A[i - 1]) {
			cnt++;
		}
		else {
			ans += cnt / 2;
			cnt = 1;
		}
	}
	ans += cnt / 2;
	cout << ans << endl;
}
