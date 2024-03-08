#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define ALL(x) (x).begin(), (x).end()
#define REP(i ,n) for(int i = 0; i < (int)(n); i++)
#define pb push_back
typedef vector<int>vint;
typedef vector<ll>vll;
template<typename T> istream &operator>>(istream &is, vector<T> &vec){ for (auto &v : vec) is >> v; return is; }
template<typename A,typename B>inline void chmin(A &a,B b){if(a>b)a=b;}
template<typename A,typename B>inline void chmax(A &a,B b){if(a<b)a=b;}
int main()
{
    int N,M;
    cin >> N >> M;
    vector<vector<int>> book(M,vector<int>(N,0));
    vint P(M);
    REP(i,M){
        int K;
        int s;
        cin >> K;
        REP(k,K){
            cin >> s;
            s--;
            book[i][s] = 1;
        }
    }
    cin >> P;
    int ans=0;
    for(int bit=0; bit < (1 << N); bit++){
        vint cnt(M);
        bool flag = true;
        for(int s=0; s<N; s++){
            if(bit & (1 << s)){
                for(int i=0; i<M; i++){
                    if(book[i][s]){
                        cnt[i]++;
                    }
                }
            }
        }
        REP(i,P.size()){
            if(P[i] != cnt[i]%2){
                flag = false;
            }
        }
        if(flag){
            ans++;
        }
    }
    cout << ans << endl;
}