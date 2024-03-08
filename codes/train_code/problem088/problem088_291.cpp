#include <cstdio>
#include <iostream>
using namespace std;

bool nonprime[1000000];

int main(){
	long i,j,n;
	for(i=2;i<=999999;i++){
		for(j=2;i*j<=999999;j++) nonprime[i*j]=1;
	}
	while(scanf("%ld",&n)!=EOF){
		j=0;//j?????????????????¨?????????????????????
		for(i=2;i<=n;i++) if(!nonprime[i]) j++;
		cout << j << endl;
	}
	return 0;
}