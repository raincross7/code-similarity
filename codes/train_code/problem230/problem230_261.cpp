#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<sstream>
#include<fstream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<cmath>
#include<utility>
#include<numeric>
#include<iterator>
#include<algorithm>
#include<functional>
#include<ctime>
#include<cassert>
using std::cin;
using std::cout;
using std::endl;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int,int> P;
#define FOR(i,init,len) for(int i=(init);i<(len);++i)
#define For(i,init,len) for(int i=(init);i<=(len);++i)
#define fi first
#define se second
#define pb push_back
#define is insert
namespace IO {
	inline char getchar() {
		static const int BUFSIZE=5201314;
		static char buf[BUFSIZE],*begin,*end;
		if(begin==end) {
			begin=buf;
			end=buf+fread(buf,1,BUFSIZE,stdin);
			if(begin==end) return -1;
		}
		return *begin++;
	}
}
inline void read(int &in) {
	int c,symbol=1;
	while(isspace(c=IO::getchar()));
	if(c=='-') { in=0;symbol=-1; }
	else in=c-'0';
	while(isdigit(c=IO::getchar())) { in*=10;in+=c-'0'; }
	in*=symbol;
}
inline int read() { static int x;read(x);return x; }
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a; }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define PA(name,init,len) cout<<#name"["<<(len-init)<<"]=";FOR(_,init,len) cout<<name[_]<<" \n"[_==(len-1)];
#define Pa(name,init,len) cout<<#name"["<<(len-init+1)<<"]=";For(_,init,len) cout<<name[_]<<" \n"[_==(len)];
#define PV(name) cout<<#name"="<<name<<'\n';

int n;
const int maxn=15;
const int INF=1e9;
int d[maxn][maxn];

int main() {

    while(scanf("%d",&n)==1&&n){
        For(i,0,9) For(j,0,9) d[i][j]=INF;
        For(i,0,9) d[i][i]=0;
        int ma=0;
        FOR(i,0,n){int a,b,c;scanf("%d%d%d",&a,&b,&c);d[a][b]=d[b][a]=c;ma=std::max(ma,std::max(a,b));}
        For(k,0,ma) For(i,0,ma) For(j,0,ma) d[i][j]=std::min(d[i][j],d[i][k]+d[k][j]);
        int idx=0,ans=INF;
        For(i,0,ma){
            int t=0;
            For(j,0,ma) t+=d[i][j];
            if(t<ans) {idx=i;ans=t;}
        } 
        printf("%d %d\n",idx,ans);
    }

	return 0;
}

