#include<bits/stdc++.h>
#define ll long long
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }


using namespace std;

int main(){
    int N;
    cin >> N;
    string S[N];
    rep(i, N){
        cin >> S[i];
    }
    ll ans = 0;
    string t[N];

    rep(i, N){

        bool flag = true;
        rep(j, N){
                t[j] = S[(i+j)%N];
        }

        rep(j, N){
            rep(k, N){
                if (t[j][k] != t[k][j]) {
                    flag = false;
                }
            }
        }
        if (flag) {
            ans++;
        }
    }
    cout << ans * N << endl;

}
