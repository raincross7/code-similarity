#include <stdio.h>
int n;
int ans;
int main()
{
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		ans+=i;
	}

	printf("%d",ans);
}