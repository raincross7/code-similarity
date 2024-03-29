#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define Fast_IO ios::sync_with_stdio(false);
#define fir first
#define sec second
#define mod 998244353
inline int read()
{
	char ch=getchar(); int nega=1; while(!isdigit(ch)) {if(ch=='-') nega=-1; ch=getchar();}
	int ans=0; while(isdigit(ch)) {ans=ans*10+ch-48;ch=getchar();}
	if(nega==-1) return -ans;
	return ans;
}
typedef pair<int,int> pii;
int add(int x,int y){return x+y>=mod?x+y-mod:x+y;}
int sub(int x,int y){return x-y<0?x-y+mod:x-y;}
int mul(int x,int y){return 1LL*x*y%mod;}
#define N 5005
int f[N],a[N];
signed main()
{
#ifdef __LOCAL__
	freopen("in.txt","r",stdin);
#endif
	int n,k,sum=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		a[i]=min(read(),k);
		sum+=a[i];
	}
	f[0]=1;
	sort(a+1,a+n+1);
	for(int i=n;i>=0;i--)
	{
		bool ok=0;
		for(int j=k-1;j>=k-sum&&j>=0;j--)
		{
			if(f[j]) ok=1;
		}
		if(!ok)
		{
			cout<<i<<endl;
			return 0;
		}
		for(int j=k;j>=a[i];j--) f[j]|=f[j-a[i]];
		sum-=a[i];
	}
#ifdef __LOCAL__
	cout<<"Time Used : "<<clock()<<endl;
#endif
	return 0;
}

