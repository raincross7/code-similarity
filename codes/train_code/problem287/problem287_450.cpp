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
const long long INF = 100100100100;
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
    return a * b / gcd(a, b);
}

int main() {
    int N;cin >> N;
    vector<int> retu(N);
    for(int i = 0;i<N;i++) cin >> retu.at(i);
    //全一致はN/2の変更でOK
    for(int i = 0;i<N-1;i++){
        if(retu.at(i) != retu.at(i+1)) break;
        if(i == N-2){
            cout << N/2 << endl;
            return 0;
        }
    }
    map<int,int> odd;
    map<int,int> even;
    for(int i = 0;i<N;i++){
        if(i % 2 == 0){
            even[retu.at(i)]++;
        }
        else{
            odd[retu.at(i)]++;
        }
    }
    P maxiO = P(0,0),maxiE = P(0,0);
    for(auto P : odd){
        if(maxiO.second < P.second){
            maxiO.first = P.first;
            maxiO.second = P.second;
        }
    }
    for(auto Q : even){
        if(maxiE.second < Q.second){
            maxiE.first = Q.first;
            maxiE.second = Q.second;
        }
    }
    //ラッキーなことに一番大きいやつの数が違った時
    if(maxiO.first != maxiE.first){
        cout << N/2 - maxiO.second + N/2 - maxiE.second << endl;
        return 0;
    }
    //↓Fu*kin' cases! So troublesome!
    int maxi2O = 0,maxi2E = 0;
    int ans = 0;
    for(auto P : odd){
        if(maxiO.second >= P.second && P.first != maxiO.first){
            maxi2O = max(maxi2O,P.second);
        }
    }
    ans = N/2 - maxi2O + N/2 - maxiE.second;
    for(auto Q : even){
        if(maxiE.second >= Q.second && Q.first != maxiE.first){
            maxi2E = max(maxi2E,Q.second);
        }
    }
    ans = min(ans,N/2 - maxiO.second + N/2 - maxi2E);
    cout << ans << endl;
}