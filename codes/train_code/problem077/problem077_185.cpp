#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
#define rep(i,n) for(int i=0;i<n;++i)
#define all(v) v.begin(), v.end()
#define PI 3.141592653589793238462643383279
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
typedef long long int ll;
typedef unsigned long long ull;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
typedef pair<ll,ll> P;
const long long MOD = 1e9+7;
const ll INF = 1LL << 60;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int main(){
    int n;
    cin >> n;
    ll cnt = 0;
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; i < n-1; i++){
        cnt += i+1;
    }

    cout << cnt << endl;


}