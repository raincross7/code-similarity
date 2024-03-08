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
#include <tuple>
#include <stdio.h>
#include <bitset>
#include <limits.h>
#include <complex>
#include <deque>
#include <iomanip>
#include <list>
#include <time.h>
using namespace std;
#define pi pair<int32,int32>
#define pl pair<int64,int64>
#define chmax(a,b) (a<b ? a=b:0)
#define chmin(a,b) (a>b ? a=b:0)
#define en cout << endl //セミコロンつけろ
//#define MM 1000000000
//#define MOD MM+7
const int MM = 1e9;
const int MOD = MM+7;
const long double PI = acos(-1);
const long long INF = 1e15;
int dx[8] = {-1,0,1,0,-1,-1,1,1};
int dy[8] = {0,-1,0,1,-1,1,1,-1};
// 'A' = 65, 'Z' = 90, 'a' = 97, 'z' = 122
template<typename T>
T GCD(T u,T v){
    return v ? GCD(v,u%v) : u;
}
template<typename T>
T LCM(T x,T y){
    T gc = GCD(x,y);
    return x*y/gc;
}

int main(){
    int N; cin >> N;
    vector<int> v(N),v2(N);

    for (int i = 1; i <= N; i++){
        int k; cin >> k;
        v[k-1] = i;
    }
    int q = 0;
    for (int i = N-1; i >= 0; i--){
        q += v[i];
        v2[i] = q;
    } 
    int p = 0; 
    for (int i = 0; i < N; i++){
        p += v[i];
        if (i) cout << " ";
        cout << p;
    }
    cout << endl;
    for (int i = 0; i < N; i++){
        if (i) cout << " ";
        cout << v2[i];
    }
    cout << endl;

    return 0;
}
