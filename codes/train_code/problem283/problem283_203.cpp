#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
using namespace std;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef long long ll;

template<class T> void read(T &x){
	int f=0; x=0; char ch=getchar();
	for(;!isdigit(ch);ch=getchar()) f|=(ch=='-');
	for(;isdigit(ch);ch=getchar()) x=x*10+ch-'0';
	if(f) x=-x;
}

const int N=5000005;
int a[N],n;
char s[N];
ll ans;

int main(){
	scanf("%s",s+1);
	n=strlen(s+1)+1;
	rep(i,1,n-1){
		if(s[i]=='<'){
			a[i+1]=max(a[i+1],a[i]+1);
		}
	}
	per(i,n-1,1){
		if(s[i]=='>'){
			a[i]=max(a[i],a[i+1]+1);
		}
	}
	rep(i,1,n){
		ans+=a[i];
	}
	cout<<ans<<endl;
    return 0;
}