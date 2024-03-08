#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }


int main() {
    int n, m; cin >> n >> m;
    vector<int> lvec;
    vector<int> rvec;
    if(n%2 == 0) {
        lvec.emplace_back(2); rvec.emplace_back(n);
        int half = (n-1)/2;
        half /= 2;
        if(half == 0) rvec[0] = lvec[0]+1;
        if(half > m) {
            for(int i =1; i < m; ++i) {
                lvec.emplace_back(lvec[i-1]+1);
                rvec.emplace_back(rvec[i-1]-1);
            }
        }else {
            for(int i = 1; i < half; ++i) {
                lvec.emplace_back(lvec[i-1]+1);
                rvec.emplace_back(rvec[i-1]-1);
            }
            int now = lvec.size();
            lvec.emplace_back(lvec[now-1]+2);
            rvec.emplace_back(rvec[now-1]-1);
            for(int i = now+1; i < m; ++i) {
                lvec.emplace_back(lvec[i-1]+1);
                rvec.emplace_back(rvec[i-1]-1);
            }
        }
    }else {
        lvec.emplace_back(2); rvec.emplace_back(n);
        for(int i = 1; i < m; ++i) {
            lvec.emplace_back(lvec[i-1]+1);
            rvec.emplace_back(rvec[i-1]-1);
        }
    }

    for(int i = 0; i < m; ++i ) {
        cout << lvec[i] << " " << rvec[i] << endl;
    }
}