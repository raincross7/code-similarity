#include<bits/stdc++.h>
using namespace std;
int ans[1005][1005];
int main(){
	int h,w,a,b;
	cin>>h>>w>>a>>b;
	for(int i=1;i<=b;++i)
		for(int j=1;j<=a;++j)
			ans[i][j]=1;
	for(int i=b+1;i<=h;++i)
		for(int j=a+1;j<=w;++j)
			ans[i][j]=1;
	for(int i=1;i<=h;++i,puts(""))
		for(int j=1;j<=w;++j)
			cout<<ans[i][j];
	return 0;
}
