#include<bits/stdc++.h>
using namespace std;
const int N=105;
int a[N],n,ans;
int main(){
	scanf("%d",&n);
	for (int i=1;i<=n;i++)scanf("%d",&a[i]);
	for (int i=1,j=1;i<=n;i=j){
		while (j<=n&&a[i]==a[j])j++;
		ans+=(j-i)/2;
	}
	printf("%d\n",ans);
}