#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz(v) (v).size()
#define all(v) (v).begin(),(v).end()
#define inf 1000000000
#define mod 1000000007
using namespace std;
template <class T> void chmax(T &x,T y){x=x>y?x:y;return;}
template <class T> void chmin(T &x,T y){x=x<y?x:y;return;}
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;

ll h,w;

int main()
{
	cin>>h>>w;
	if(h==1||w==1) cout<<1<<endl;
	else if(w%2==0||h%2==0) cout<<h*w/2<<endl;
	else cout<<h*w/2+1<<endl;
	return 0;
}