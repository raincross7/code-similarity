#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <cstring>
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <cmath>
#include <numeric>
#include <float.h>
#include <math.h>
#include <sstream>
#include <iterator>
using namespace std;
// repマクロの定義
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
// allマクロの定義
#define all(v) v.begin(), v.end()
const  long long INF = 1LL << 60;
typedef unsigned long long ll;
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}



int ctoi(char c) {
 	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return 0;
	}
}

bool is_prime(const unsigned n){
    switch(n){
        case 0: // fall-through
        case 1: return false;
        case 2: // fall-through
        case 3: return true;
    } // n > 3 が保証された

    if(n % 2 == 0 || n % 3 == 0) return false;
    // n は 2 と 3 のいずれの倍数でもないことが保証された
    // これより n は (6の倍数)-1 か (6の倍数)+1 である

    // 6の倍数前後の数を使って試し割りをする
    for(unsigned i = 5; i * i <= n; i += 6) {
        if(n % i     == 0) return false; // (6の倍数)-1
        if(n % (i+2) == 0) return false; // (6の倍数)+1
    }

    return true;
}

map<ll,ll> mp;

auto findFactors(ll num){
	
    ll i;
    while (num % 2 == 0){ // 偶数の素数は2のみ
        if(mp.count(2)){
			mp[2] = mp[2] + 1;
		}
		else{
			mp[2] = 1;
		}
        num /= 2;
    }
    for (i = 3; i <= num; i++){ // 他の素数で割っていく
        while (num % i == 0){
			if(mp.count(i)){
			mp[i] = mp[i] + 1;
		}
		else{
			mp[i] = 1;
		}
            num /= i;
        }
    }
    return 0;
}
ll kaizyou(ll n){
    if(n == 1){
        return 1;
    }
    else{
        return (n * kaizyou(n-1)) % 1000000007;
    }
}

int main(){ 
    string S; cin >> S;
    int t = S.size();
    ll cnt = 0;
    ll ans = 0;
    for(int i = t - 1; i >= 0; i--){
        if(S[i] == 'W'){
            cnt ++;
        }
        else{
            ans += cnt;
        }
    }
    cout << ans << endl;
}