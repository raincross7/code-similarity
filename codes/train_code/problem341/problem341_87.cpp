#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <stack>
#include <numeric>
#include <algorithm>
#include <stdio.h>
#include <bitset>
#include <limits.h>
#include <complex>
#include <deque>
#include <iomanip>
using namespace std;
#define MM 1000000000
#define MOD MM+7
#define pi pair<int32,int32>
#define pl pair<int64,int64>
#define chmax(a,b) (a<b ? a=b:0)
#define chmin(a,b) (a>b ? a=b:0)
//#define en cout << endl //セミコロンつけろ
const long double PI = acos(-1);
const long long INF = 1e15;
int dx[8] = {-1,0,1,0,-1,-1,1,1};
int dy[8] = {0,-1,0,1,-1,1,1,-1};


template<typename T>
T GCD(T u,T v){
    return v ? GCD(v,u%v) : u;
}
template<typename T>
T LCM(T x,T y){
    T gc = GCD(x,y);
    return x*y/gc;
}

long long pow_mod(long long n,long long k,long long m){
    if (k == 0){
        return 1;
    } else if (k % 2 == 1){
        return pow_mod(n,k-1,m)*n % m;
    } else {
        long long t = pow_mod(n,k/2,m);
        return t*t % m;
    }
}

int main(){
    string s; int w; cin >> s >> w;
    string ans;
    for(int i = 0; i < s.size(); i += w){
        ans += s[i];
    }
    cout << ans << endl;
}