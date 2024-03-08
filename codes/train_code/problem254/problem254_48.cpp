/*~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=
* * WRITER:kakitamasziru/OxOmisosiru * *
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
#include <stack> // stack
#include <deque> // deque
#include <math.h>//pow,,,
#include <cmath>//abs,,,
#include <bitset> // bitset
//It is so troublesome that I include bits/stdc++.h !
using namespace std;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
const long long INF = 1001001001001001;
const long long MOD = 1000000007;
typedef pair<int,int> P;
//NのM乗を求める(繰り返し二乗法)
long long mod_pow(long long N, long long M) {
    if (M == 0) return 1;
    long long res = mod_pow((N * N) % MOD, M / 2);
    //最下位ビット(*N)が1の時は単独でNをかける
    if (M & 1) res = (res * N) % MOD;

    return res %= MOD;
}
long long nCr(long long n, long long r) {
    long long A = 1, B = 1;
    //Aが分子Bが1/r!
    for (long long i = n - r + 1; i <= n; i++) {
        A = A * i % MOD;
    }
    for (long long i = 1; i <= r; i++) {
        B = B * i % MOD;
    }
    B = mod_pow(B, MOD - 2);
    B %= MOD;
    //Bは割るのではなく掛ける
    return (A * B) % MOD;
}

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}
 
long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

long long A,B;
bool ok(long long key,long long index){
    string S = to_string(index);
    long long nagasa = S.size();
    if(index*A+nagasa*B > key) return true;
    else if(index*A+nagasa*B <= key) return false;
}
long long binary_search(long long key,long long size){
    //left,right,midはいずれもindex
    long long left = -1,right = size;
    while(right - left > 1){
        long long mid = left + (right-left)/2;
        long long hantei = ok(key,mid);
        if(hantei) right = mid;
        else left = mid;
    }
    if(left == -1)return 0;
    return left;
}

int main() {
    int N,K;cin >> N >> K;
    vector<long long> retu(N);
    for(int i = 0;i<N;i++)cin >> retu.at(i);
    long long ans = INF;
    long long nowans = 0;

    for(int bit = 0;bit < (1 << N); bit++){
        bitset<15> B(bit);
        int count = 0;
        for(int j = 0;j<N;j++){
            if(B.test(j)) count++;
        }
        if(count < K) continue;
        long long maxi = 0;
        for(int j = 0;j<N;j++){
            maxi = max(maxi,retu.at(j));
            if(B.test(j)){
                if(retu.at(j) > maxi){
                    maxi = retu.at(j);
                }
                else{
                    nowans += maxi - retu.at(j);
                    maxi++;
                }
            }
        }
        ans = min(ans,nowans);
        nowans = 0;
        maxi = 0;
    }

    cout << ans << endl;

    // PLEASE GIVE ME THE "ACCEPTED" !
}
