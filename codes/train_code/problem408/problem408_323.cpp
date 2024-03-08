#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
#include<vector>
#include<array>
#include<algorithm>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vec;
typedef vector<vector<ll>> mat;
typedef pair<ll,ll> P;
typedef map<ll,ll> MP;
typedef priority_queue<ll> PQ;
typedef stack<ll> ST;
typedef queue<ll> QUE;
#define pb push_back
#define st first
#define nd second
#define SZ(x) ((int)(x).size())
#define FOR(i,s,n) for(int i=(int)(s); i< (int)(n); i++)
#define rep(i,n) FOR(i,0,n)
#define all(x) (x).begin(),(x).end()
#define each(x,c) for(auto x: (c))
#define LB(x,a) lower_bound(all(x), a)
#define UB(x,a) upper_bound(all(x), a)
const ll mod=1e9+7;
const ll INF=1e18;
const double EPS=1.0e-10;
const double PI=M_PI;

int main(){
    ll N; cin>>N;
    ll sum=0,M=N*(N+1)/2;
    vec A(N+1);
    rep(i,N){
        scanf("%lld",&A[i]);
        sum+=A[i];
    }
    if(sum%M!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    ll K=sum/M,count=0;
    A[N]=A[0];
    rep(i,N){
        ll D=A[i+1]-A[i]-K;
        if(D>0 || D%N!=0){
            cout<<"NO"<<endl;
            return 0;
        }
        count-=D/N;
    }
    if(count==K) cout<<"YES"<<endl;
    else         cout<<"NO"<<endl;
    return 0;
}