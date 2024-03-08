// ====================================
//   author: M_sea
//   website: https://m-sea-blog.com/
// ====================================
#include <bits/stdc++.h>
#define file(x) freopen(#x".in","r",stdin); freopen(#x".out","w",stdout)
#define debug(...) fprintf(stderr,__VA_ARGS__)
using namespace std;
typedef long long ll;

int read() {
	int X=0,w=1; char c=getchar();
	while (c<'0'||c>'9') { if (c=='-') w=-1; c=getchar(); }
	while (c>='0'&&c<='9') X=X*10+c-'0',c=getchar();
	return X*w;
}

const int N=100000+10;

int n,a[N],p[N];
ll ans[N];

int main() {
	n=read();
	for (int i=1;i<=n;++i) a[i]=read();
	for (int i=1;i<=n;++i) p[i]=i;
	sort(p+1,p+n+1,[](int x,int y) {
		return a[x]!=a[y]?a[x]>a[y]:x>y;
	});
	for (int i=1,x=1e9;i<=n;++i) {
		if (i!=n&&a[p[i+1]]==a[p[i]]) continue;
		x=min(x,p[i]);
		ans[x]+=1ll*i*(a[p[i]]-a[p[i+1]]);
	}
	for (int i=1;i<=n;++i) printf("%lld\n",ans[i]);
	return 0;
}