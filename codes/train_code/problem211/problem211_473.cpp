#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define REP(i, l, n) for(int i=(l), i##_len=(n); i<i##_len; ++i)
#define ALL(x) (x).begin(),(x).end()
#define pb push_back

ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(){
    int n; cin >> n;
    vector<ll> lis(n);
    REP(i, 0, n){cin >> lis[i];}
    reverse(ALL(lis));
    if(lis[0] == 2){
        ll mi = 2, ma = 3;
        REP(i, 1, n){
            ll prema = ma, premi = mi;
            mi = lis[i] * ((mi + (lis[i]-1)) / lis[i]);
            ma = max(mi + (lis[i]-1), (ma/lis[i])*lis[i] + (lis[i]-1) );
            if(ma < premi || mi < premi || (prema+1) <= mi){
                cout << -1 << endl;
                return 0;
            }
        }
        cout << mi << " " << ma << endl;
    }else if(lis[0] == 1){
        ll mi = 2, ma = 2;
        REP(i, 1, n){
            ll prema = ma, premi = mi;
            mi = lis[i] * ((mi + (lis[i]-1)) / lis[i]);
            ma = max(mi + (lis[i]-1), (ma/lis[i])*lis[i] + (lis[i]-1) );
            if(ma < premi || mi < premi || (prema+1) <= mi){
                cout << -1 << endl;
                return 0;
            }
        }
        cout << mi << " " << ma << endl;
    }else{
        cout << -1 << endl;
        return 0;
    }
}