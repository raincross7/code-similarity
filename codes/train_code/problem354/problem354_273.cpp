#include<bits/stdc++.h>
using namespace std;

int read()
{
	int s=0;
	char c=getchar(),lc='+';
	while (c<'0'||'9'<c) lc=c,c=getchar();
	while ('0'<=c&&c<='9') s=s*10+c-'0',c=getchar();
	return lc=='-'?-s:s;
}
void write(int x)
{
	if (x<0)
	{
		putchar('-');
		x=-x;
	}
	if (x<10) putchar(x+'0');
	else
	{
		write(x/10);
		putchar(x%10+'0');
	}
}
void print(int x,char c='\n')
{
	write(x);
	putchar(c);
}

signed main()
{
	int a=read(),b=read(),c=read(),n=read(),ans=0;
	for (int i=0;i*a<=n;i++)
	for (int j=0;i*a+j*b<=n;j++)
	{
		int m=n-i*a-j*b;
		ans+=m%c==0;
	}
	print(ans);

	return 0;
}