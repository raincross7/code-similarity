#include <bits/stdc++.h>
using namespace std;

#define INF 1001001001
#define LINF 1001001001001001001
#define MOD 1000000007
#define MOD2 998244353

#define all(a)  (a).begin(),(a).end()
#define dig(n)  to_string(n).length()

#define pb push_back
#define eb emplace_back
#define mkp make_pair

#define se second
#define fi first

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pii,pii> ppii;

int main(){

    bool flag=false;
    ll ans=0,sum=0;

    int a,b;
    cin >>a>>b;
  
  	if(a%3==0)flag=true;  	
  	if(b%3==0)flag=true;
  	if((a+b)%3==0)flag=true;


    //cout <<fixed<<setprecision(16)<< << endl;
    //cout << ans << endl;

    if(flag)cout << "Possible" <<endl;
    else cout << "Impossible" <<endl;
    
    return 0;
}
