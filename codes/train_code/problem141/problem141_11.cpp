#include <bits/stdc++.h>
using namespace std;

#define INF_LL (int64)1e18
#define INF (int32)1e9
#define REP(i, n) for(int i = 0;i < (n);i++)
#define FOR(i, a, b) for(int i = (a);i < (b);i++)
#define all(x) x.begin(),x.end()
#define fs first
#define sc second

using int32 = int_fast32_t;
using uint32 = uint_fast32_t;
using int64 = int_fast64_t;
using uint64 = uint_fast64_t;
using PII = pair<int32, int32>;
using PLL = pair<int64, int64>;

const double eps = 1e-6;

template<typename A, typename B>inline void chmin(A &a, B b){if(a > b) a = b;}
template<typename A, typename B>inline void chmax(A &a, B b){if(a < b) a = b;}

const int64 mod = 1e9+7;

string key="qwertasdfgzxcvb";

bool left(char c){
	if(key.find(c) != string::npos) return 1;
	else return 0;
}

int main(void){
	string s;
	while(cin >> s && s != "#"){
		int32 cnt = 0;
		REP(i, s.size()-1){
			if((left(s[i]) && !left(s[i+1])) || (!left(s[i]) && left(s[i+1]))) cnt++;
		}
		cout << cnt << endl;
	}
}
