#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;
using lint=long long;

int main(){
	lint n,x; cin>>n>>x;

	lint ans=x;
	lint a=x,b=n,c=n-x,d=n-x;
	while(1){
		if(a>b) swap(a,b);
		if(c>d) swap(c,d);

		if(b==1){ ans+=c+d-1; break; }
		if(d==1){ ans+=a+b-1; break; }
		if(b==d){ ans+=b; break; }

		if(b>d){ lint m=(b%d==0?b/d-1:b/d); ans+=m*d; b-=m*d; }
		else   { lint m=(d%b==0?d/b-1:d/b); ans+=m*b; d-=m*b; }
	}
	cout<<ans<<endl;

	return 0;
}
