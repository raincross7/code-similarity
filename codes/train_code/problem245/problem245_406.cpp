#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<utility>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<bitset>
#include<iomanip>
#include<list>
#include<deque>
using namespace std;
//#define MODE 1
#ifdef MODE
#define DEB(X) cout<< #X <<": "<<X<<" ";
#define DEB2(X) cout<<X<<" ";
#define END cout<<endl;
#else
#define DEB(X) {}
#define DEB2(X) {}
#define END {}
#endif
typedef long long ll;
#define int ll
#define uset unordered_set
#define umap unordered_map
//typedef std::pair<int,int> P;
struct edge{int to,cost;};
const int INF=100000000000000000;
const int INF2=9223372036854775807;
const int MOD=1000000007;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define min(X,Y) (((int)(X)<(int)(Y))?(X):(Y))
#define max(X,Y) (((int)(X)>(int)(Y))?(X):(Y))
#define NP(X,Y) next_permutation(X,Y)
#define setdouble(X,Y) cout<<fixed<<setprecision(X)<<Y
int ceil2(int a,int b){if(a%b==0){return a/b;}else{return a/b+1;}}
int pow2(int a,int b){int r=1;for(int i=1;i<=b;i++){r*=a;}return r;}
int Log2(int a){int t=0;while(1){if(a==0||a==1){break;}a/=2;t++;}return t;}

int N,K;
int A[5010],B[5010];

signed main(){
	cin>>N>>K;
	REP(i,N){
		cin>>A[i];
		A[i]--;
	}
	REP(i,N){
		cin>>B[i];
	}
	int ans=-INF;
	REP(i,N){
		int s=i;
		int sum=0;
		int cyclecnt=0;
		while(true){
			cyclecnt++;
			sum+=B[s];
			s=A[s];
			if(s==i)break;
		}
		int path=0;
		int cnt=0;
		while(true){
			cnt++;
			path+=B[s];
			if(cnt>K)break;
			int num=(K-cnt)/cyclecnt;
			int score=path+max(0,sum)*num;
			ans=max(ans,score);
			s=A[s];
			if(s==i)break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
