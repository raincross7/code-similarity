#include<bits/stdc++.h>
using namespace std;
char p[101000];
int s[101000],P[101000],n;
int main()
{
    scanf("%d",&n);
    scanf("%s",&p);
    int i,j;
    for(i=0;p[i];i++)
    {
    	if(p[i]=='o') P[i+1]=0;
    	else P[i+1]=1;
	}
	P[n+1]=P[1];
	for(i=0;i<8;i++)
	{
		s[0]=i&1;
		s[1]=(i>>1)&1;
		s[2]=(i>>2)&1;
        for(j=2;j<=n+1;j++)
		{
			s[j+1]=s[j-2]^P[j];
		}/*
		cout<<"i:  ";
		for(int i=0;i<=n+2;i++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
		cout<<"P:  ";
		for(int i=0;i<=n+2;i++)
		{
			cout<<P[i]<<" ";
		}
		cout<<endl;
		cout<<"s:  ";
		for(int i=0;i<=n+2;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
		cout<<endl;*/
        if(s[0]^s[n]^s[1]^s[n+1]||s[1]^s[n+1]^s[2]^s[n+2]) continue;
        for(j=1;j<=n;j++)
        {
        	printf("%c",(s[j-1]^s[j])?'W':'S');
		}
//		cout<<endl;
		return 0;
	}
	cout<<-1<<endl;
	return 0;
}