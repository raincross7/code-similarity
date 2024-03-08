/*~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=
*$* WRITER:kakitamasziru/OxOmisosiru *$*
~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=*/
#ifdef LOCAL_JUDGE
#define _GLIBCXX_DEBUG //FOR THE DEBUG! COMMENT OUT THIS WHEN SUBMITTING!
#endif
#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <iomanip>
#include <limits>//setprecision
//#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
//#include <unordered_set> //unordered_set
#include <stack> // stack
#include <deque> // deque
#include <math.h>//pow,,,
#include <cmath>//abs,,,
#include <bitset> // bitset
//It is so troublesome that I include bits/stdc++.h !
using namespace std;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
const long long INF = 10010010010010;
const long long MOD = 1000000007;
typedef pair<int,int> P;

//Solve N^M. This, mod_pow use Iterative Square Method.
long long mod_pow(long long N, long long M) {
    if (M == 0) return 1;
    long long res = mod_pow((N * N) % MOD, M / 2);
    //最下位ビット(*N)が1の時は単独でNをかける
    if (M & 1) res = (res * N) % MOD;

    return res %= MOD;
}

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}
long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b ;
}

int main() {
    int N;cin >> N;
    vector<string> retu(N);
    int A = 0,B = 0;
    for(int i = 0;i<N;i++) cin >> retu.at(i);
    int ans = 0;
    int special = 0;
    for(int i = 0;i<N;i++){
        string T = retu.at(i);
        for(int j = 0;j<T.size()-1;j++){
            if(T.at(j) == 'A' && T.at(j+1) == 'B') ans++;
        }
        if(T.back() == 'A' && T.front() != 'B') A++;
        if(T.front() == 'B' && T.back() != 'A') B++;
        if(T.front() == 'B' && T.back() == 'A') special++;
    }
    if(N == 1){
        cout << ans << endl;
        return 0;
    }
    int bonus = min(A,B);
    if(special == 0){
        cout << ans + bonus << endl;
    }
    else{
        if(A == 0 && B == 0){
            cout << ans + special-1 << endl;
        }
        else{
            cout << ans + bonus + special << endl;
        }
    }
}
