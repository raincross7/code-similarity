#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define _USE_MATH_DEFINES
#include <math.h>
#define rep(i,n) for(int i = 0;i < n;i++)
#define NIL = -1;
#define all(x) x.begin(),x.end()
const ll INF = 1e9;
const ll mod = 1e9 + 7;

int digit(ll x) {
    if (x / 10 == 0) return 1;
    return digit(x / 10) + 1;
}

ll gcd(long long a,long long b) {
    if (a < b) swap(a,b);
    if (b == 0) return a;
    
    return gcd(b,a%b);
}

ll lcm(ll a,ll b){
    return ((a * b == 0)) ? 0 : (a / gcd(a,b) * b);
}

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};


//////////////////////////////////////////////////////////////////////////////////////

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    long long step = 0,ans = 0;
    for (int i = 0;i<n;i++){
        cin >> a[i];
        if (i == 0){
            continue;
        }

        if(a[i] < a[i-1]){
            step = a[i-1] - a[i];
            ans += step;
            a[i] += step; 
        }
    }

    cout << ans << endl;
}

