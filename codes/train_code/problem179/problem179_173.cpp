#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<map>
#include<iomanip>
#include<set>
#define rep(index,num) for(int index=0;index<num;index++)
#define rep1(index,num) for(int index=1;index<=num;index++)
#define brep(index,num) for(int index=num-1;index>=0;index--)
#define brep1(index,num) for(int index=num;index>0;index--)
#define scan(argument) cin>>argument
#define prin(argument) cout<<argument<<endl
#define kaigyo cout<<endl
#define eps 1e-7
#define mp(a1,a2) make_pair(a1,a2)
#define ALL(a) (a).begin(),(a).end()
#define rALL(a) (a).rbegin(),(a).rend()
typedef long long ll;
typedef long double ld;
using namespace std;
typedef pair<ll,ll> pll;
typedef pair<int,int> pint;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef vector<pint> vpint;
typedef vector<pll> vpll;
ll INFl=1e+18+1;
int INF=1e+9+1;
int main(){
	int N,K;
	ll a[100001];
	ll asum[100001]={},psum[100001]={};
	scan(N>>K);
	rep(i,N){
		scan(a[i]);
		asum[i+1]=asum[i]+a[i];
		psum[i+1]=psum[i]+max(0LL,a[i]);
	}
	ll ans=0;
	rep(i,N-K+1){
		ll nini=psum[N]-(psum[i+K]-psum[i]);
		ans=max(ans,nini+max(0LL,asum[i+K]-asum[i]));
	}
	prin(ans);
	return 0;
}
