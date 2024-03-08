#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define REP(i,n) for(int (i)=0;(i)<=(int)(n);(i)++)
#define rep1(i,x,n) for(int (i)=(x);(i)<(int)(n);(i)++)
#define REP1(i,x,n) for(int (i)=(x);(i)<=(int)(n);(i)++)
#define rrep(i,x) for(int i=((int)(x)-1);i>=0;i--)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using Int = long long;
 
//INT_MAX = 2147483647;
//LLONG_MAX = 9223372036854775807;
//ULLONG_MAX = 18446744073709551615;
const int MOD = 1000000007;
const ll INF = numeric_limits<ll>::max();
const int inf = 1e8;
typedef pair<int,int> P;
typedef std::priority_queue<int> IntPrioQueue;
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue;
 
//少数点表示
//cout << std::fixed << std::setprecision(14) << 値
 
int main(){
    cin.tie( 0 ); ios::sync_with_stdio( false );

    string n;
    cin >> n;
    int len = n.length();
    int count = 0;
    rep(i,len){
        count += n[i]-'0';
    }
    
    if(count%9 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}