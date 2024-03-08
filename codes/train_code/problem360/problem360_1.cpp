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
#include<unordered_set>
#include<unordered_map>
#include<bitset>
#include<iomanip>
#include<list>
#include<deque>
using namespace std;
//#define MODE 1
#ifdef MODE
#define DEB(X) cout<< #X <<": "<<X<<" ";
#define END cout<<endl;
#else
#define DEB(X) {}
#define END {}
#endif
typedef long long ll;
#define int ll
#define uset unordered_set
#define umap unordered_map
typedef std::pair<int,int> P;
struct edge{int to,cost;};
const int INF=100000000000000000;
const int INF2=9223372036854775807;
const int MOD=1000000007;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define min(X,Y) (((int)(X)<(int)(Y))?(X):(Y))
#define max(X,Y) (((int)(X)>(int)(Y))?(X):(Y))
#define MAX(X,Y) (*max_element(X,Y))
#define MIN(X,Y) (*min_element(X,Y))
#define NP(X,Y) next_permutation(X,Y)
#define setp(X,Y) cout<<fixed<<setprecision(Y)<<X;
int ceil2(int a,int b){if(a%b==0){return a/b;}else{return a/b+1;}}
int pow2(int a,int b){int r=1;for(int i=1;i<=b;i++){r*=a;}return r;}
int Log2(int a){int t=0;while(1){if(a==0||a==1){break;}a/=2;t++;}return t;}

struct Node{
	int x,y,num;
};

int N;
int A[110],B[110],C[110],D[110];
P p[110],p2[110];
bool F[110],F2[110];
Node n[110];
Node n2[110];

bool com(Node a,Node b){
	return a.x<b.x;
}

bool com2(Node a,Node b){
	return a.y>b.y;
}

signed main(){
	cin>>N;
	REP(i,N){
		cin>>A[i]>>B[i];
		Node s;
		s.x=A[i],s.y=B[i],s.num=i;
		n[i]=s;
	}
	REP(i,N){
		cin>>C[i]>>D[i];
		Node s;
		s.x=C[i],s.y=D[i],s.num=i;
		n2[i]=s;
	}
	sort(n2,n2+N,com);
	int ans=0;
	REP(i,N){
		vector<Node> v;
		REP(j,N){
			if(F[j]==false&&n[j].x<n2[i].x&&n[j].y<n2[i].y){
				v.push_back(n[j]);
			}
		}
		if(v.empty())continue;
		sort(v.begin(),v.end(),com2);
		int p=v[0].num;
		F[p]=true;
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
