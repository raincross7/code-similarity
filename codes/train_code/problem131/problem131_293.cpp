#define _GLIBCXX_DEBUG//TLEの原因になるので注意！！！！！！！！！！！
#include<cmath>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<int> arr;
stack<int> st;
queue<int> qu;
queue<pair<int,int> > qu2;
priority_queue<int> pq;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define rep2(i,n) for(int i=1; i<=(int)(n); i++)
#define mins(x,y) x=min(x,y)
#define maxs(x,y) x=max(x,y)
typedef set<int> set_t;
typedef set<string> set_g;
typedef complex<double> xy_t;
static const int NIL = -1;
static const int INF = 1000000007;
#define mp make_pair
#define sz(x) int(x.sise())
#define mod 1000000007
#define reps(i,s,n) for(int i = s; i < n; i++)
#define Rreps(i,n,e) for(int i = n - 1; i >= e; --i)
#define Rrep(i,n) Rreps(i,n,0)
deque<int> deq;
#define fi first
#define se second
//#define int long long

//cerrはコメントアウトしなくても通る//ただしTLEを引き起こすことがある

ll N,M,H,W,K,Q,A,B;
string S;
//const ll MOD = 998244353;
const ll MOD = (1e+9) + 7;
//const ll INF = 1LL << 60;
//typedef pair<ll,ll> P;
typedef pair<int, int> P;
bool chmx(int &a, int b) {
	if (b > a) {
		a = b;
		return true;
	}
	return false;
}

bool chmn(int &a, int b) {
	if (b < a) {
		a = b;
		return true;
	}
	return false;
}

int main(){
    double n,m,d;
    cin >> n>> m>> d;
    int nn=n;
    //にぶたん　dp??
    //絶対値　c なる組み合わせは　d　m-1かな
    //m-1の絶対値が存在しえる　期待値の線形性より
    double ans=0;
    //rep(d,nn){
    if(d==0)ans+=1/n;
    else ans+=2*(n-d)/(n*n);
    //}
    ans*=(m-1);
    printf("%.10lf\n",ans);
    return 0;
}

