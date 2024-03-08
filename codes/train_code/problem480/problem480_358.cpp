#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
#include<stdio.h>
#include<vector>
#include<queue>
#include<math.h>
using namespace std;
#define int long long
#define double long double
#define rep(s,i,n) for(int i=s;i<n;i++)
#define c(n) cout<<n<<endl;
#define ic(n) int n;cin>>n;
#define sc(s) string s;cin>>s;
#define mod 1000000007
#define inf 1000000000000000007
#define f first
#define s second
#define mini(c,a,b) *min_element(c+a,c+b)
#define maxi(c,a,b) *max_element(c+a,c+b)
#define pi 3.141592653589793238462643383279
#define e_ 2.718281828459045235360287471352
#define P pair<int,int>
#define upp(a,n,x) upper_bound(a,a+n,x)-a;
#define low(a,n,x) lower_bound(a,a+n,x)-a;
#define UF UnionFind 
//printf("%.12Lf\n",);
int keta(int x){
	rep(0,i,30){
		if(x<10){
			return i+1;
		}
		x=x/10;
	}
}	
int gcd(int x,int y){
	if(x==0||y==0)return x+y;
	int aa=x,bb=y;
	rep(0,i,1000){
		aa=aa%bb;
		if(aa==0){
			return bb;
		}	
		bb=bb%aa;
		if(bb==0){
			return aa;
		}
	}
}	
int lcm(int x,int y){
	int aa=x,bb=y;
	rep(0,i,1000){
		aa=aa%bb;
		if(aa==0){
			return x/bb*y;
		}	
		bb=bb%aa;
		if(bb==0){
			return x/aa*y;
		}
	}
}
bool p(int x){
	if(x==1)return false;
	rep(2,i,sqrt(x)+1){
		if(x%i==0&&x!=i){
			return false;
		}
	}	
	return true;
}
int max(int a,int b){
	if(a>=b)return a;
	else return b;
}
string maxst(string s,string t){
	int n=s.size();
	int m=t.size();
	if(n>m)return s;
	else if(n<m)return t;
	else{
		rep(0,i,n){
			if(s[i]>t[i])return s;
			if(s[i]<t[i])return t;
		}
		return s;
	}
}		
int min(int a,int b){
	if(a>=b)return b;
	else return a;
}	
int n2[41];		
int nis[41]; 
int nia[41];
int mody[41];
int nn;
int com(int n,int y){
	int ni=1;
	for(int i=0;i<41;i++){
		n2[i]=ni;
		ni*=2;
	}
	int bunsi=1,bunbo=1;
	rep(0,i,y)bunsi=(bunsi*(n-i))%mod;
	rep(0,i,y)bunbo=(bunbo*(i+1))%mod;
	mody[0]=bunbo;
	rep(1,i,41){
		bunbo=(bunbo*bunbo)%mod;
		mody[i]=bunbo;
	}
	rep(0,i,41)nis[i]=0;
	nn=mod-2;
	for(int i=40;i>=0;i-=1){
		if(nn>n2[i]){
			nis[i]++;
			nn-=n2[i];
		}
	}
	nis[0]++;
	rep(0,i,41){
		if(nis[i]==1){
			bunsi=(bunsi*mody[i])%mod;
		}
	}
	return bunsi;
}
int gyakugen(int n,int y){
	int ni=1;
	for(int i=0;i<41;i++){
		n2[i]=ni;
		ni*=2;
	}
	mody[0]=y;
	rep(1,i,41){
		y=(y*y)%mod;
		mody[i]=y;
	}
	rep(0,i,41)nis[i]=0;
	nn=mod-2;
	for(int i=40;i>=0;i-=1){
		if(nn>n2[i]){
			nis[i]++;
			nn-=n2[i];
		}
	}
	nis[0]++;
	rep(0,i,41){
		if(nis[i]==1){
			n=(n*mody[i])%mod;
		}
	}
	return n;	
}	
int yakuwa(int n){
	int sum=0;
	rep(1,i,sqrt(n+1)){
		if(n%i==0)sum+=i+n/i;
		if(i*i==n)sum-=i;
	}
	return sum;
}	
bool integer(double n){
	if(n==long(n))return true;
	else return false;	
}
int poow(int y,int n){	
	if(n==0)return 1;
	n-=1;
	int ni=1;
	for(int i=0;i<41;i++){
		n2[i]=ni;
		ni*=2;
	}
	int yy=y;
	mody[0]=yy;
	rep(1,i,41){
		yy=(yy*yy)%mod;
		mody[i]=yy;
	}
	rep(0,i,41)nis[i]=0;
	nn=n;
	for(int i=40;i>=0;i-=1){
		if(nn>=n2[i]){
			nis[i]++;
			nn-=n2[i];
		}
	}
	rep(0,i,41){
		if(nis[i]==1){
			y=(y*mody[i])%mod;
		}
	}
	return y;	
}
int minpow(int x,int y){
	int sum=1;
	rep(0,i,y)sum*=x;
	return sum;
}
int ketawa(int x,int sinsuu){
	int sum=0;
	rep(0,i,100)sum+=(x%poow(sinsuu,i+1))/(poow(sinsuu,i));
	return sum;
}	
int sankaku(int a){
	return a*(a+1)/2;
} 
int same(int a[1111111],int n){
	int ans=0;
	rep(0,i,n){
		if(a[i]==a[i+1]){
			int j=i;
			while(a[j+1]==a[i]&&j<=n-2)j++;
			ans+=sankaku(j-i);
			i=j;
		}
	}
	return ans;
}
bool search(int x){
	int n;
	int a[n];
	int l=0,r=n;
	while(r-l>=1){
		int i=(l+r)/2;
		if(a[i]==x)return true;
		else if(a[i]<x)l=i+1;
		else r=i;
	}
	return false;
}
/*using Graph=vector<vector<int>>;
int oya[114514];
int depth[114514];
void dfs(const Graph &G, int v, int p, int d) {
    depth[v] = d;
    oya[v]=p;
    for (auto nv : G[v]) {
       if (nv == p) continue; // nv が親 p だったらダメ
       dfs(G, nv, v, d+1); // d を 1 増やして子ノードへ
    }
}*/
/*int H=10,W=10;
char field[10][10];
char memo[10][10];
void dfs(int h, int w) {
    memo[h][w] = 'x';

    // 八方向を探索
    for (int dh = -1; dh <= 1; ++dh) {
        for (int dw = -1; dw <= 1; ++dw) {
        	if(abs(0-dh)+abs(0-dw)==2)continue;
            int nh = h + dh, nw = w + dw;

            // 場外アウトしたり、0 だったりはスルー
            if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
            if (memo[nh][nw] == 'x') continue;

            // 再帰的に探索
            dfs(nh, nw);
        }
    }
}*/
int XOR(int a,int b){
	int ni=1;
	rep(0,i,41){
		n2[i]=ni;
		ni*=2;
	}
	rep(0,i,41)nis[i]=0;
	for(int i=40;i>=0;i-=1){
		if(a>=n2[i]){
			nis[i]++;
			a-=n2[i];
		}
		if(b>=n2[i]){
			nis[i]++;
			b-=n2[i];
		}	
	}
	int sum=0;
	rep(0,i,41)sum+=(nis[i]%2*n2[i]);
	return sum;
}
//int ma[1024577][21];
//for(int bit=0;bit<(1<<n);bit++)rep(0,i,n)if(bit&(1<<i))ma[bit][i]=1;
struct UnionFind {
	vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2
	
    UnionFind(int N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }
    
    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};
struct aiueo {
	vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2
	
    aiueo(int N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }
    
    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};
int a[214514];//コスト
signed main(){
	ic(n)
	vector<P> e[214514];
	rep(0,i,n-1){
		ic(s) ic(t) ic(d)
		s-=1;
		t-=1;
		e[s].push_back(P{d,t});
		e[t].push_back(P{d,s});
	}
	ic(q) ic(k)
	k-=1;
	rep(0,i,n)a[i]=inf;
	a[k]=0;
	priority_queue<P,vector<P>,greater<P>>pp;
	//(コスト、頂点番号)で入れる
	pp.push(P{0,k});
	while(!pp.empty()){
		P t=pp.top();pp.pop();
		if(t.first!=a[t.second])continue;
		for(auto g:e[t.second]){
			if(a[g.second]>t.first+g.first){
				a[g.second]=t.first+g.first;
				pp.push(P{a[g.second],g.second});				
			}
		}
	}
	rep(0,i,q){
		ic(x) ic(y)
		x-=1;
		y-=1;
		c(a[x]+a[y])
	}
}	