#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep2(i,n) for(int i=1;i<=(n);i++)
#define rep3(i,i0,n) for(int i=i0;i<(n);i++)
#define pb push_back
#define mod 1000000007
#define INF 200000000000
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll gcd(ll a, ll b) {return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) {return a/gcd(a,b)*b;}
#define all(x) x.begin(), x.end()

bool compare(pair<int, int> a, pair<int, int> b) {
    if(a.first != b.first){
        return a.first < b.first;
        
    }else{
        return a.second < b.second;
    }
}
// 入力



int main() {
    ll N,K,R,S,P;
    string T;
    cin >>N>>K>>R>>S>>P>>T;
    ll ans = 0;
    map<ll,char> out;
        rep(i,N){
            if(T[i] == 's' && out[i-K] !='r'){
                ans+=R;
                out[i] = 'r';
            }
        }
        rep(i,N){
            if(T[i] == 'p' && out[i-K] !='s'){
                ans+=S;
                out[i] = 's';
            }
        }

        rep(i,N){
            if(T[i] == 'r' && out[i-K] !='p'){
                ans+=P;
                out[i] = 'p';
            }
        }
    
    cout << ans << endl;


    return 0;
    

}