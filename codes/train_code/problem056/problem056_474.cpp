#include<bits/stdc++.h>

using namespace std;

#define debug(x) cout << '[' << #x << " is: " << x << "] " << '\n';
#define imod(a , n) (a % n + n ) % n

#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define inF freopen("lineup.in","r",stdin );
#define outF freopen("lineup.out" , "w" , stdout ) ;
#define sor(v) sort(v.begin() , v.end());
#define print(v) for(auto f : v ) cout << f << " " ;
#define ll long long
#define int ll
const double eps = 1e-6 , PI = acos(-1) ;
const long long OO = 1e18 ;
const ll N = 200 , oo = 1e7 , M = 6, mod = 1e9 + 7 , K = 12;

int32_t main(){
    // inF;outF;

    fastio;
    // Dont Forget memset

    //calculate constraints please!!!
int n , k ;
cin >> n >> k ;
vector<int>v(n);
for(auto &it : v)cin >> it ;
sort(v.begin() , v.end());
int sum = 0 ;
for(int i = 0 ; i < k ; i ++)sum += v[i];
cout << sum ;

}
