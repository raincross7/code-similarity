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
#include<bitset>
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
	ll W,H,p[100001],q[100001];
	vpll pq;
	ll ans=0;
	scan(W>>H);
	ll nokori[2]={H+1,W+1};
	rep(i,W) scan(p[i]),pq.push_back({p[i],0});
	rep(i,H) scan(q[i]),pq.push_back({q[i],1});
	sort(ALL(pq));
	rep(i,W+H){
		ans+=pq[i].first*nokori[pq[i].second];
		nokori[!(pq[i].second)]--;
	}
	prin(ans);
	return 0;
}
