#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define FOR(i,a,b) for(int i=(a); i<=(b); i++)
#define rep(i,n) for(int i = 0; i < (n); i++)
#define loop(k) rep(author_is_masa,k)
#define chmin(a,b) if((a)>(b)) (a)=(b);
#define chmax(a,b) if((a)<(b)) (a)=(b);
#define vi vector<int>
#define pii pair<int,int>
#define all(v) (v).begin(),(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define pb push_back
#define pf push_front
int gcd(int a,int b){/*a>=0,b>=0,￢(a=b=0)*/
  while(min(a,b)>0){if(a<b)swap(a,b);a%=b;}return max(a,b);
}
int dx[]={1,0,-1,0,1,-1,-1,1};
int dy[]={0,1,0,-1,1,1,-1,-1};
const int MOD = 1e9+7;
const long long INF = 1e18+10;

/*--------------------------------------------------------------------*/


signed main(){
	int h,w;
	cin>>h>>w;
	string s[303];
	rep(i,h)cin>>s[i];

	vi cnti(h,0),cntj(w,0);

	rep(i,h){
		rep(j,w){
			cnti[i]+=s[i][j]=='#';
			cntj[j]+=s[i][j]=='#';
		}
	}
	rep(i,h){
		if(cnti[i]==0) continue;
		rep(j,w){

			if(cntj[j]==0) continue;

			cout<<s[i][j];
		}
		cout<<endl;
	}




	return 0;
}