#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <math.h>
#include <iomanip>
#include <bitset>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <utility>
#include <set>
using namespace std;
typedef long long int ll;
typedef long double ld;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
typedef pair<ll,ll> pairs;
bool pairCompare(const pair<double,ll>& firstElof, const pair<double,ll>& secondElof){
    return firstElof.first < secondElof.first;
}
#define MAX_N 1000100
bool x[MAX_N];
ll num[MAX_N];
ll fibl[MAX_N]={0};
// 四方向への移動ベクトル
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
 
ll fib(ll a){
    if (fibl[a]!=0)return fibl[a];
    if (a==0){
        return 0;
    }else if (a==1){
        return 1;
    }
    return fibl[a]=fib(a-1)+fib(a-2);
}
 
ll eratosthenes(ll n) {
    int p = 0;
    for (ll i=0; i<=n; ++i) x[i] = true;
    x[0] = x[1] = false;
    for(int i=2; i<=n; ++i) {
        if(x[i]) {
            p++;
            for(int j=2*i; j<=n; j+=i) x[j] = false;
        }
        
        num[i] = p;
    }
    return p;
}
 
ll gcd(ll a,ll b){
    if (a%b==0)return(b);
    else return(gcd(b,a%b));
}
 
ll keta(ll N){
    int tmp{};
    while( N > 0 ){
        tmp += ( N % 10 );
        N /= 10;
    }
    N = tmp;
    return N;
}

int main(){
    string s,k="keyence";
    cin >> s;
    ll count=0;
    for (ll i=0;i<s.size();i++){
        if (s[i]==k[count]){
            count++;
        }else{
            break;
        }
    }
    if (count==k.size()){
        cout << "YES" << endl;
        return 0;
    }else{
        for (ll i=s.size()-1;i>s.size()-k.size()+count-1;i--){
            if (s[i]!=k[k.size()-s.size()+i]){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}