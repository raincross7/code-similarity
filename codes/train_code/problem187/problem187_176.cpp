#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;scanf("%d%d",&n,&m);
	int l=n/2,r=l+1;
	if(n&1)for(int i=0;i<m;i++)printf("%d %d\n",l--,r++);
	else{
		l=1,r=m+1;
		while(l<r)printf("%d %d\n",l++,r--);
		l=m+2,r=2*m+1;
		while(l<r)printf("%d %d\n",l++,r--);
	}
	return 0;
}