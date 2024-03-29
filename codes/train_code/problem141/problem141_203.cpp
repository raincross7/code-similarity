#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define each(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define mp(a,b) make_pair(a,b)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define maxch(x,y) x=max(x,y)
#define minch(x,y) x=min(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt(x) bitset<32>(x).count()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;
typedef pair<ll, ll> PL;
typedef pair<P, ll> PPL;

#define INF INT_MAX/3

#define MAX_N 1000

string s;
string s1="abcdefgqrstvwxz";

bool is_left(char c){
	rep(i,s1.length()){
		if(c==s1[i])return true;
	}
	return false;
}

int main(){
	cin.sync_with_stdio(false);
	while(1){
		cin>>s;
		if(s[0]=='#')break;
		int flag=-1;
		int res=0;
		rep(i,s.length()){
			if((flag==0&&is_left(s[i]))||(flag==1&&!is_left(s[i]))){
				flag=1-flag;
				res++;
			}else if(flag==-1){
				if(is_left(s[i]))flag=1;
				else flag=0;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}