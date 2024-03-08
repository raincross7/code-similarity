// execute g++ main.cpp -std=c++14 -I C:\Users\naoya\Desktop\code\Atcoder
#include<bits/stdc++.h>
//#include<atcoder/all>
typedef long long ll;
typedef long double ld;
using namespace std;
//using namespace atcoder;

using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define REP(i, l, n) for(int i=(l), i##_len=(n); i<i##_len; ++i)
#define ALL(x) (x).begin(),(x).end()
#define pb push_back

ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

template<class T>inline bool chmax(T &a, T b) {if(a < b) {a = b;return true;}return false;}
template<class T>inline bool chmin(T &a, T b) {if(a > b) {a = b;return true;}return false;}


char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(){
    int h, w; cin >> h >> w;
    vector<string> lis(h);
    vector<vector<vector<int> > > dp(h, vector<vector<int> >(w, vector<int>(4, 0)));
    REP(i, 0, h){cin >> lis[i];}
    REP(i, 0, h){
        int count = 0;
        REP(l, 0, w){
            if(lis[i][l] == '.'){
                count++;
                dp[i][l][0] = count;
            }else{
                count = 0;
            }
        }
    }
    REP(i, 0, h){
        int count = 0;
        for(int l = w-1; l >= 0; l--){
            if(lis[i][l] == '.'){
                count++;
                dp[i][l][1] = count;
            }else{
                count = 0;
            }
        }
    }
    REP(i, 0, w){
        int count = 0;
        REP(l, 0, h){
            if(lis[l][i] == '.'){
                count++;
                dp[l][i][2] = count;
            }else{
                count = 0;
            }
        }
    }
    REP(i, 0, w){
        int count = 0;
        for(int l = h-1; l >= 0; l--){
            if(lis[l][i] == '.'){
                count++;
                dp[l][i][3] = count;
            }else{
                count = 0;
            }
        }
    }
    int ans = 0;
    REP(i, 0, h){
        REP(l, 0, w){
            int mid = 0;
            REP(j, 0, 4){
                mid += dp[i][l][j];
            }
            chmax(ans, mid - 3);
        }
    }
    cout << ans << endl;
}