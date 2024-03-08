#include <bits/stdc++.h>
#define FOR(i, begin, end) for(int i=(begin);i<(end);i++)
#define REP(i, n) FOR(i,0,n)
#define IFOR(i, begin, end) for(int i=(end)-1;i>=(begin);i--)
#define IREP(i, n) IFOR(i,0,n)
#define SORT(a) sort(a.begin(), a.end())
#define REVERSE(a) reverse(a.begin(), a.end())
#define Lower_bound(v, x) distance(v.begin(), lower_bound(v.begin(), v.end(), x))
#define Upper_bound(v, x) distance(v.begin(), upper_bound(v.begin(), v.end(), x))
#define int long long
#define INF 1000000000000000000
using namespace std;

typedef vector<int> vec;
typedef vector<vec> mat;
typedef pair<int, int> Pii;

#define ANS(f) if(f) cout << "YES" << endl; else cout << "NO" << endl;

template<typename T>
void readv(vector<T> &a){ REP(i, a.size()) cin >> a[i]; }
void readi(vector<int> &a){ REP(i, a.size()){cin >> a[i]; a[i]--;} }



signed main(){

    int W, H; cin >> W >> H;
    vec p(W); readv(p);
    vec q(H); readv(q);

    vector<Pii> P(0);
    REP(i, W) P.push_back(Pii(p[i], 0));
    REP(i, H) P.push_back(Pii(q[i], 1));
    SORT(P);

    int ans = 0, w = 0, h = 0;
    REP(i, H + W){
        int c = P[i].first;
        if(P[i].second == 0){
            ans += c * (H + 1 - h);
            w++;
        }else{
            ans += c * (W + 1 - w);
            h++;
        }
    }
    cout << ans;
    
    return 0;
}