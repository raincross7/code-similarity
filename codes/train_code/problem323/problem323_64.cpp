#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;
using ll=long long;
using P=pair<int,int>;
#define rep(i,a,b) for(ll i=a;i<ll(b);i++)
#define repr(i,a,b) for(ll i=a;i>=ll(b);i--)
#define endl '\n'
#define ALL(x) x.begin(),x.end()
#define ALLR(x) x.rbegin(),x.rend()
#define INF 1e9
#define DEBUG(x) cout<<"debug: "<<x<<endl
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}

int n, m;
vector<int> a(1010);
int main(){
    cin >> n >> m;
    rep(i, 0, n) cin >> a[i];

    int sum = 0;
    rep(i, 0, n) sum += a[i];
    sort(ALLR(a));

    int count = 0;
    double t = (double)sum/(4*m);
    rep(i, 0, n){
        if(a[i] < t) break;
        count++;
    }

    if(count >= m) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
