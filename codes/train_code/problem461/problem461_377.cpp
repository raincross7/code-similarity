#include<bits/stdc++.h> //Ithea Myse Valgulious
namespace chtholly{
typedef long long ll;
#define re0 register int
#define rel register ll
#define rec register char
#define gc getchar
//#define gc() (p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<23,stdin),p1==p2)?-1:*p1++)
#define pc putchar
#define p32 pc(' ')
#define pl puts("")
/*By Citrus*/
char buf[1<<23],*p1=buf,*p2=buf;
inline int read(){
  int x=0,f=1;char c=gc();
  for (;!isdigit(c);c=gc()) f^=c=='-';
  for (;isdigit(c);c=gc()) x=(x<<3)+(x<<1)+(c^'0');
  return f?x:-x;
  }
template <typename mitsuha>
inline bool read(mitsuha &x){
  x=0;int f=1;char c=gc();
  for (;!isdigit(c)&&~c;c=gc()) f^=c=='-';
  if (!~c) return 0;
  for (;isdigit(c);c=gc()) x=(x<<3)+(x<<1)+(c^'0');
  return x=f?x:-x,1;
  }
template <typename mitsuha>
inline int write(mitsuha x){
  if (!x) return 0&pc(48);
  if (x<0) pc('-'),x=-x;
  int bit[20],i,p=0;
  for (;x;x/=10) bit[++p]=x%10;
  for (i=p;i;--i) pc(bit[i]+48);
  return 0;
  }
inline char fuhao(){
  char c=gc();
  for (;isspace(c);c=gc());
  return c;
  }
}using namespace chtholly;
using namespace std;
const int yuzu=1e5;
typedef int fuko[yuzu|10];
fuko a;
int cmp(int u,int v){
return abs(u-*a/2)>abs(v-*a/2);
}
int main() {
int i,n=read();
for (i=1;i<=n;++i) a[i]=read();
sort(a+1,a+n+1),*a=a[n]; 
sort(a+1,a+n,cmp);
printf("%d %d",a[n],a[n-1]);
}