#include <iostream>
#include <limits>
#include <cfenv>
#include <cmath>
#include <algorithm>
#include <array>
#include <bitset>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <tuple>
#include <queue>
#include <vector>
#include <cmath>
#include <random>
#include <math.h>
#include <random>
#include <functional>


#define FOR(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define REP(i, n) FOR(i, 0, n)
#define rREP(i, n) for(int (i) = (n) - 1; (i) >= 0; --(i))
#define ALL(TheArray) TheArray.begin(), TheArray.end()

using lli = long long int;
using pii = std::pair<int, int>;

template <class T> inline bool chmax(T& a, T b){
    if(a < b){a = b; return true;}
    return false;
}
template <class T> inline bool chmin(T& a, T b){
    if(a > b){a = b; return true;}
    return false;
}



// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


std::vector<int> A;

int main(void){
    int n; scanf("%d", &n);
    A.resize(n); REP(i, n) scanf("%d", &A[i]);
    
    lli cnt = A.front() - 1;
    int takashi = 2;

    for(int x = 1; x < n; ++x){
        if(A[x] == takashi){takashi++; continue;}
        if(A[x] % takashi == 0){A[x] -= (takashi + 1); cnt++;}
        cnt += A[x] / takashi;
    }
    printf("%lld\n", cnt);

    
    return 0;
}