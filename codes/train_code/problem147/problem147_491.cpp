#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

int main(){
	int a,b; scanf("%d%d",&a,&b);
	puts(a+b==15?"+":a*b==15?"*":"x");
	return 0;
}
