#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define P pair<int,int>
#define fi first
#define se second
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1000000000000000000
#define MOD 1000000007
#define all(v) v.begin(),v.end()
#define pb push_back
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int kaijo[2000010];
struct edge{int to,cost;};
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return a/gcd(a,b)*b;
}
bool prime(int a){
    if(a==1)return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0)return false;
    }
    return true;
}
void init_fact(){
    kaijo[0]=1;
    for(int i=1;i<=2000000;i++){
        kaijo[i]=kaijo[i-1]*i;
        kaijo[i]%=MOD;
    }
}
int modpow(int a,int b){
    if(b==0)return 1;
    if(b%2)return modpow(a,b-1)*a%MOD;
    int memo=modpow(a,b/2);
    return memo*memo%MOD;
}
int comb(int a,int b){
    if(!kaijo[0])init_fact();
    return kaijo[a]*modpow(kaijo[a-b],MOD-2)%MOD*modpow(kaijo[b],MOD-2)%MOD;
}
int inv(int x){
    x=modpow(x,MOD-2);
    return x;
}
bool kosa(double ax,double ay,double bx,double by,double cx,double cy,double dx,double dy){
    double ta=(cx-dx)*(ay-cy)+(cy-dy)*(cx-ax);
    double tb=(cx-dx)*(by-cy)+(cy-dy)*(cx-bx);
    double tc=(ax-bx)*(cy-ay)+(ay-by)*(ax-cx);
    double td=(ax-bx)*(dy-ay)+(ay-by)*(ax-dx);
    return tc*td<0&&ta*tb<0;
}
double dist(double ax,double ay,double bx,double by){
    return sqrt((bx-ax)*(bx-ax)+(ay-by)*(ay-by));
}
int k,d[100010];
deque<P>q;
signed main(){
	cin>>k;
	rep(i,k)d[i]=INF;
	d[1]=1;
	q.push_back({1,1});
	while(!q.empty()){
		P p=q.front();
		q.pop_front();
		if(d[p.se]<p.fi)continue;
		if(d[(p.se+1)%k]>p.fi+1){
			d[(p.se+1)%k]=p.fi+1;
			q.push_back({p.fi+1,(p.se+1)%k});
		}
		if(d[(p.se*10)%k]>p.fi){
			d[(p.se*10)%k]=p.fi;
			q.push_front({p.fi,(p.se*10)%k});
		}
	}
	cout<<d[0]<<endl;
    return 0;
}

