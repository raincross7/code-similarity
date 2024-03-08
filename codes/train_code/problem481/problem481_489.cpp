#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
#define endl '\n'
#define pb push_back
#define fi first
#define se second
typedef long long ll;
#define double long double
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fr(a,b,c) for(int a=b; a<=c; a++)
#define rep(a,b,c) for(int a=b; a<c; a++)
#define all(con) con.begin(),con.end()
#define w(x) int x; cin>>x; while(x--)
const ll infl=0x3f3f3f3f3f3f3f3fLL;
const int infi=0x3f3f3f3f;
//const int mod=998244353;
const int mod=1000000007;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cout<<fixed<<setprecision(8);
    string s;
    cin>>s;
    int ans = 0;
    rep(i,0,(int)s.length()-1)
    {
    	if(s[i] == s[i+1] && s[i] == '0')
    	{
    		s[i+1] = '1';
    		ans++;
    	}
    	else if(s[i] == s[i+1] && s[i]== '1')
    	{
    		s[i+1] = '0';
    		ans++;
    	}
    }
    cout<<ans<<endl;
    return 0;
}