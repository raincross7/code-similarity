#include<bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int>vint;
typedef pair<int,int>pint;
typedef vector<pint>vpint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define all(v) (v).begin(),(v).end()
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
template<typename A,typename B>inline void chmin(A &a,B b){if(a>b)a=b;}
template<typename A,typename B>inline void chmax(A &a,B b){if(a<b)a=b;}

int N,K;
int S[101010];
signed main(){
    while(cin>>N>>K,N||K){
    rep(i,N){
        cin>>S[i+1];
        S[i+1]+=S[i];
    }

    int ma=-1001001001001001001ll;
    for(int i=0;i+K<=N;i++)chmax(ma,S[i+K]-S[i]);
    cout<<ma<<endl;
    }
    return 0;
}