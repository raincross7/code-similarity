#include<cstdio>
#include<algorithm>

using namespace std;
int main(void)
{
	int a[5];
	for(int i = 0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+5);
	reverse(a,a+5);
		for(int i = 0;i < 5;i++)
		{
			printf("%d",a[i]);
			if(i <= 3) printf(" ");
		}
		printf("\n");



	return 0;
}