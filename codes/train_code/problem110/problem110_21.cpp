#include <bits/stdc++.h>
using namespace std;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const ll INF = 1LL<<60;
const ll mod = 1000000007LL;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N,M,K;
    cin>>N>>M>>K;
    bool can = false;
    rep(i,N+1){
        rep(j,M+1){
            int cnt = (N-i)*j+(M-j)*i;
            if(cnt==K)can = true;
        }
    }
    if(can)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}