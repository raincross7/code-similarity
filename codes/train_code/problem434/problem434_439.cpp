#include <iostream>
#include <algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<iomanip>
#include<ctime>
#include<set>
#include<map>
#include<queue>
#include<stack>
#define sqr(x) ((x)*(x))
#define fz1(i,n) for ((i)=1;(i)<=(n);(i)++)
#define fd1(i,n) for ((i)=(n);(i)>=1;(i)--)
#define fz0g(i,n) for ((i)=0;(i)<=(n);(i)++)
#define fd0g(i,n) for ((i)=(n);(i)>=0;(i)--)
#define fz0k(i,n) for ((i)=0;(i)<(n);(i)++)
#define fd0k(i,n) for ((i)=(long long)((n)-1);(i)>=0;(i)--)
#define fz(i,x,y) for ((i)=(x);(i)<=(y);(i)++)
#define fd(i,y,x) for ((i)=(y);(i)>=(x);(i)--)
#define fzin fz1(i,n)
#define fzim fz1(i,m)
#define fzjn fz1(j,n)
#define fzjm fz1(j,m)
#define ff(c,itr) for (__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
#define rdst(st,len){static char ss[len];scanf(" %s",ss);(st)=ss;}
#define inc(x,y) {x+=(y);if(x>=mod)x-=mod;}
#define dec(x,y) {x-=(y);if(x<0)x+=mod;}
using namespace std;
int n,m,i,j,mi,mx,cnt[105];
int main()
{
	scanf("%d",&n);
	fz1(i,n){
		int x;
		scanf("%d",&x);
		cnt[x]++;
	}
	fz1(i,n){
		if(cnt[i]){
			if(!mi) mi=i;
			mx=i;
		}
	}
	if(cnt[mi]>2){
		puts("Impossible");
		return 0;
	}
	if(cnt[mi]==1&&mi*2!=mx){
		puts("Impossible");
		return 0;
	}
	if(cnt[mi]==2&&mi*2-1!=mx){
		puts("Impossible");
		return 0;
	}
	for(i=mi+1;i<=mx;i++){
		if(cnt[i]<2){
			puts("Impossible");
			return 0;
		}
	}
	puts("Possible");
	return 0;
}