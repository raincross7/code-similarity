#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define pb push_back
#define ALL(v) v.begin(),v.end()
const long long INF = 1LL << 60; // 仮想的な無限大の値;
using namespace std;
using ll = long long;
using P = pair<int, int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using Graph = vector<vector<int>>;
int main()
{
    ll A, B, C, K;
    cin >> A >> B >> C >> K;
    if(K <= A)
    {
        cout << K << endl;
    }
    else if(A+B >= K){
        cout << A << endl;
    }
    else{
        int d = K-A-B;
        cout << A-d << endl;
    }
    return 0;
}