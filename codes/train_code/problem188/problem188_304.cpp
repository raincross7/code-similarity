//This disgusting code is wriiten by Juruo D0zingbear
//Please don't hack me! 0v0 <3
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cstring>
#include <climits>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#define LL long long
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define piii pair<int, pii >
#define REP(i,n) for (int (i)=0;(i)<(n);(i)++)
#define vi vector<int>
#define vpi vector< pii >
#define INF 2147483647
#define big 19260817
#define pb push_back
#define mp make_pair
using namespace std;
const int Maxk=1005;
string mul(string a,string b){
	int res[Maxk];
	memset(res,0,sizeof(res));
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for (int i=0;i<a.length();i++){
		for (int j=0;j<b.length();j++){
			res[i+j]+=(a[i]-'0')*(b[j]-'0');
		}
	}
	for (int i=0;i<Maxk;i++){
		if (res[i]>=10) {
			res[i+1]+=(res[i]/10);
			res[i]%=10;
		}
	}
	string ret;
	bool flag=false;
	for (int i=Maxk-1;i>=0;i--){
		if (flag || res[i]){
			flag=true;
			ret=ret+(char)(res[i]+'0');
		}
	}
	if (ret=="") ret="0";
	return ret;
}
string add(string a,string b){
	if (a.length()<b.length()) swap(a,b);
	while (a.length()!=b.length()){
		b='0'+b;
	}
	for (int i=a.length()-1;i>=0;i--){
		a[i]+=(b[i]-'0');
		if (a[i]>'9' && i){
			a[i]-=10;
			a[i-1]++;
		}
	}
	if (a[0]>'9'){
		a[0]-=10;
		a='1'+a;
	}
	return a;
}

// cf IO: I64d
// atcoder IO: £ì£ì£ä
inline int read()
{
	int x = 0, f = 1; char ch = getchar();
	while (ch < '0' || ch > '9') { if (ch == '-') f = -1; ch = getchar(); }
	while (ch >= '0' && ch <= '9') { x = x * 10 + ch - '0'; ch = getchar(); }
	return x * f;
}
const int Maxn=200005;
const int Maxm=70000000;
map<int,vector<int> > v;
int sum[Maxn];
char c[Maxn];
int dp[Maxn];
int Mn
[Maxm];
int gs(int pos){
	if (pos==-1) return 0;
	return sum[pos];
}
int main(){
	//cout<<sizeof(pos)<<' '<<sizeof(sum);
	scanf("%s",c);
	int n=strlen(c);
	int full=0;
	for (int i=0;i<26;i++) full|=(1<<i);
	v[0].pb(-1);
	for (int i=0;i<n;i++){
		if (i) sum[i]=sum[i-1];
		sum[i]^=(1<<(c[i]-'a'));
		//cout<<sum[i]<<' ';
		v[sum[i]].pb(i);
	}
	for (int i=0;i<Maxm;i++) Mn[i]=1e9;
//	cout<<endl;
	dp[0]=0;
	Mn[0]=0;
	for (int i=1;i<=n;i++){
		dp[i]=1e9;
		int nv=gs(i-1);
		for (int j=0;j<27;j++){
			int wv=nv^(1<<j);
			if (j==26) wv=nv;
			if (v.count(wv)){
				dp[i]=min(dp[i],Mn[wv]+1);
			}
		}
		Mn[nv]=min(Mn[nv],dp[i]);
	//	cout<<"ff"<<dp[i]<<endl;
	}
	printf("%d\n",dp[n]);
	return 0;
}