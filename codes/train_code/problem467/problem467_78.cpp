#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
int main(){
	int k,n;
	cin>>k>>n;
	int a[n];
	rep(i,n)cin >>a[i];
	sort(a,a+n-1);
	int Max=a[0]+k-a[n-1];
	rep(i,n-1)Max=max(Max,a[i+1]-a[i]);
	cout << k-Max;
	return 0;
}