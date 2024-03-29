#include <bits/stdc++.h>
#define ll long long
using namespace std;
namespace IO
{
    const int __S=(1<<20)+5;char __buf[__S],*__H,*__T;
    inline char getc()
    {
        if(__H==__T) __T=(__H=__buf)+fread(__buf,1,__S,stdin);
        if(__H==__T) return -1;return *__H++;
    }
    template <class __I>inline void read(__I &__x)
    {
        __x=0;int __fg=1;char __c=getc();
        while(!isdigit(__c)&&__c!='-') __c=getc();
        if(__c=='-') __fg=-1,__c=getc();
        while(isdigit(__c)) __x=__x*10+__c-'0',__c=getc();
        __x*=__fg;
    }
    inline void readd(double &__x)
    {
        __x=0;double __fg=1.0;char __c=getc();
        while(!isdigit(__c)&&__c!='-') __c=getc();
        if(__c=='-') __fg=-1.0,__c=getc();
        while(isdigit(__c)) __x=__x*10.0+__c-'0',__c=getc();
        if(__c!='.'){__x=__x*__fg;return;}else __c=getc();
        double __t=1e-1;while(isdigit(__c)) __x=__x+1.0*(__c-'0')*__t,__t=__t*0.1,__c=getc();
        __x=__x*__fg;
    }
    inline void reads(char *__s,int __x)
    {
        char __c=getc();int __tot=__x-1;
        while(__c<'a'||__c>'z') __c=getc();
        while(__c>='a'&&__c<='z') __s[++__tot]=__c,__c=getc();
        __s[++__tot]='\0';
    }
    char __obuf[__S],*__oS=__obuf,*__oT=__oS+__S-1,__c,__qu[55];int __qr;
    inline void flush(){fwrite(__obuf,1,__oS-__obuf,stdout);__oS=__obuf;}
    inline void putc(char __x){*__oS++ =__x;if(__oS==__oT) flush();}
    template <class __I>inline void print(__I __x)
    {
        if(!__x) putc('0');
        if(__x<0) putc('-'),__x=-__x;
        while(__x) __qu[++__qr]=__x%10+'0',__x/=10;
        while(__qr) putc(__qu[__qr--]);
    }
    inline void prints(const char *__s,const int __x)
    {
        int __len=strlen(__s+__x);
        for(int __i=__x;__i<__len+__x;__i++) putc(__s[__i]);
    }
    inline void printd(long double __x,int __d)
    {
        long long __t=(long long)floor(__x);print(__t);putc('.');__x-=(double)__t;
        while(__d--)
        {
            long double __y=__x*10.0;__x*=10.0;
            int __c=(int)floor(__y+1e-9);if(__c==10) __c--;
            putc(__c+'0');__x-=floor(__y);
        }
    }
    inline void el(){putc('\n');}inline void sp(){putc(' ');}
}using namespace IO;
struct nod{ll num,dis;}a[100010];
ll ans,n,sz[100010],fa[100010],d[100010],dep[100010];vector<ll>son[100010];
bool cmp(nod l,nod r){return l.dis<r.dis;}
void dfs(ll u,ll f){ll i;dep[u]=dep[f]+1;for(auto v:son[u]){if(v!=f) dfs(v,u);}}
int main()
{
	read(n);ll i;for(i=1;i<=n;i++) read(a[i].dis),a[i].num=i;sort(a+1,a+n+1,cmp);for(i=1;i<=n;i++) d[i]=a[i].dis;
	for(i=n;i>=2;i--)
	{
		sz[a[i].num]++;ll tmp=d[i]-(n-2*sz[a[i].num]),pos=lower_bound(d+1,d+i,tmp)-d;
		if(pos>=i||d[pos]!=tmp){puts("-1");return 0;}
		sz[a[pos].num]+=sz[a[i].num];fa[a[i].num]=a[pos].num;
	}
	for(i=1;i<=n;i++) if(fa[i]) son[fa[i]].push_back(i);
	dep[0]=-1;dfs(a[1].num,0);for(i=1;i<=n;i++) ans+=dep[i];
	if(ans!=d[1]){puts("-1");return 0;}
	for(i=1;i<=n;i++) if(fa[i]) cout<<i<<' '<<fa[i]<<'\n';
	flush();
}