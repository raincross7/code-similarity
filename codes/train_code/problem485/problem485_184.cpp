#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define rc(x) return cout<<x<<endl,0
#define pb push_back
#define in insert
#define er erase
#define fd find
#define fr first
#define sc second
typedef long long ll;
const ll INF=0x3f3f3f3f3f3f3f3f;
const ll llinf=LLONG_MAX;
const int inf=INT_MAX;
const int nmax=1e5+5;
const int mod=1e9+7;
using namespace std;
ll x,y;
int main()
{
    //freopen("sol.in","r",stdin);
	//freopen("sol.out","w",stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);cout.tie(0);
    cin>>x>>y;
    if(abs(x-y)<=1)cout<<"Brown"<<endl;
    else cout<<"Alice"<<endl;
	return 0;
}