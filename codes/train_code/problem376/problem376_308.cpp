#include<iostream>
#include<cstdio>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<stack>
#include<vector>
#include<map>
using namespace std;

int read(){
	int x=0,f=1;
	char c=getchar();
	while(!isdigit(c)){if(c=='-')f=-1;c=getchar();}
	while(isdigit(c)){x=(x<<3)+(x<<1)+c-48;c=getchar();}
	return x*f;
}

int k,m,n;
int main(){
	n=read();
	if(n%2==0)printf("%d\n",n/2-1);
	else printf("%d\n",n/2);
	return 0;
}