#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<bitset>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<list>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<functional>
#include<cstdio>
#include<cstdlib>
using namespace std;

#define repr(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define rep(i, n) repr(i, 0, n)
#define INF 2e9
#define MOD 1000000007
//#define MOD 998244353
#define LINF (long long)4e18
#define jck 3.141592

const double EPS = 1e-10;

using ll = long long;
using Pi = pair<int,int>;
using Pl = pair<ll,ll>;

int main(){
    int N; cin >> N;
    vector<int> A(N),B(N);
    ll sum = 0;
    rep(i,N){
        cin >> A[i] >> B[i];
        sum += A[i];
    }
    if(A == B){
        cout << 0 << endl;
        return 0;
    }
    int ans = INF;
    rep(i,N){
        if(A[i] > B[i]){
            ans = min(ans,B[i]);
        }
    }
    ll ans2 = sum-ans;
    cout << ans2 << endl;   
}
