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
using namespace std;

#define repr(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define rep(i, n) repr(i, 0, n)
#define INF 2e9
#define MOD 1000000007
//#define MOD 998244353
#define LINF (long long)4e18
#define jck 3.141592

using ll = long long;
using Pi = pair<int,int>;
using Pl = pair<ll,ll>;


int main(){
    int M,K; cin >> M >> K;
    if(K >= (1<<M)){
        cout << -1 << endl;
        return 0;
    }
    if(M == 0){
        cout << 0 << " " << 0 << endl;
        return 0;
    }
    if(M == 1){
        if(K == 0){
            cout << 0 << " " << 0 << " " << 1 << " " << 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
        return 0;
    }
    rep(i,1<<M){
        if(i != K) cout << i << " ";
    }
    cout << K << " ";
    for(int i = (1<<M)-1; i >= 0; i--){
        if(i != K) cout << i << " ";
    }
    cout << K << endl;
}