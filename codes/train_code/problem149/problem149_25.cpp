#pragma GCC target ("avx2")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("O3")
#include "bits/stdc++.h"
#include <unordered_set>
#include <unordered_map>
#include <random>
using namespace std;
typedef long long ll;
const ll MOD = 1'000'000'007LL; /*998'244'353LL;*/
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for(int (i)=0; (i)<(n); (i)++)
const int dx[4]={ 1,0,-1,0 };
const int dy[4]={ 0,1,0,-1 };

int N;
int C[100000];

signed main(){
    cin >> N;
    rep(i, N){
        int A;
        cin >> A;
        C[A-1]++;
    }
    int cnt = 0;
    rep(i, 100000){
        if(C[i] > 1) cnt += C[i]-1;
    }
    cout << N - (cnt+1)/2*2 << endl;
}