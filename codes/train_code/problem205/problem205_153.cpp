//satyaki3794
#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)
#define LEFT(n) (2*(n))
#define RIGHT(n) (2*(n)+1)
 
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
 
ll pwr(ll base, ll p, ll mod=MOD){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}


ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}

int r, c, d;
char arr[1005][1005], block[2][5][5];


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //http://codeforces.com/blog/entry/53502?#comment-387076

    cin>>r>>c>>d;
    string chars = "RGYB";

    for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++){
    		int x = (i+j)%(2*d) / d;
    		int y = (i-j+500*d)%(2*d) / d;
    		cout<<chars[x*2+y];
    	}
    	cout<<endl;
    }

    return 0;
}







 


