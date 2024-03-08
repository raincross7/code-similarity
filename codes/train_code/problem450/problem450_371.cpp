#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> iint;
typedef pair<ll,ll> llll;
#define ALL(x) (x).begin(),(x).end()
const ll zero = 0;
const ll one = 1;
const ll INF = 9223372036854775807; //10^18
const int inINF = 2147483647; //10^9
const ll MOD = 1000000007; //10^9+7
const ll MOD2 = 998244353;
void Yes() {printf("Yes\n");}
void No() {printf("No\n");}
void YES() {printf("YES\n");}
void NO() {printf("NO\n");}

int main(){
    int X, N;
    cin >> X >> N;
    int pp;
    vector<bool> p(102, true);
    for (int i = 0; i < N; i++) {
        cin >> pp;
        p[pp] = false;
    }
    int ans = -1;
    for (int i = 0; i < 102; i++) {
        if(p[i]){
            if(abs(X - i) < abs(X - ans)){
                ans = i;
            }
        }
    }
    printf("%d\n", ans);

}