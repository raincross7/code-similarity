#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<tuple>
#include<ctime>
#include<functional>
#include<cmath>
#include<cassert>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> p; 
#define rep(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define ALL(v) (v).begin(), (v).end()
#define p(s) cout<<(s)<<endl
#define p2(s, t) cout << (s) << " " << (t) << endl
#define br() p("")
#define pn(s) cout << (#s) << " " << (s) << endl
#define p_yes() p("Yes")
#define p_no() p("No")
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define chmax(a, b) a = (((a)<(b)) ? (b) : (a))

int main(){
    ll N,K;
    cin>>N>>K;
    double a,cnt=1,sum=0;
    for(int i=1;i<=N;i++){
        a=i;
        while(a<=K-1){
            cnt/=2;
            a*=2;
        }
        sum+=cnt/N;
        cnt=1;

    }
    cout << std::fixed << std::setprecision(15) << sum<< endl;
}