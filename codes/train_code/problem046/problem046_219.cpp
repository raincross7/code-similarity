#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define fill(x,v) memset(x, v, sizeof(x))
#define endl '\n' 
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define IO freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
const ld eps=(ld)1e-9;
const ld PI=(ld)acos(-1.0);
const int inf=1e9+5;
const ll linf=1e18L+5;
const int mod=1e9+7;

void solve(){
	int h,w;
	cin>>h>>w;
	char c[h][w];
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			cin>>c[i][j];
		}
	}
	for (int i = 0; i < 2*h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			cout<<c[(i+2)/2-1][j];
		}
		cout<<endl;
	}
}
int main(){fio;
int test=1;
// cin>>test;
while(test--){
	solve();
	cout<<endl;
}
return 0;
}
