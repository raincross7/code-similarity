// Author := Abhishek Giri

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define V(type) vector<(type)>
#define in(var) cin>>(var)
#define out(var) cout<<(var)
#define on(var) cout<<var<<"\n"
#define f(i,n) for(ll i = 0 ; i < n ;i++)
#define mfor(i,init,n,b) for(ll i = (init) ; i < (n) ; i+= (b))
#define cfor(i,c) for(auto i = (c).begin() ; i!= (c).end(); i++)
#define el "\n"
#define ret return
#define F first
#define S second
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define all(v) (v).begin(),(v).end()

/*##################################################################################*/


/*bool prime[100000] ;
vector < int > pr;
void calculateprime()
{
    prime[0] = prime[1] = true;
    for(int i = 2 ; i <= 100000 ; i++)
    {
        if(prime[i] == false)
        {
            pr.pb(i);
            for(ll j = i*i ; j <= 100000 ; j += i )
            {
                prime[j] = true;
            }
        }
    }
}
*/


void customrun(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll powerwithmod(ll x, unsigned ll y, ll p)
{
    ll res = 1;

    x = x % p;

    if (x == 0) return 0;

    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;

        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}


bool comp(const pair < ll , ll >  &a, const pair < ll , ll > &b ){
    if(a.F == b.F) return a.S < b.S;
    return a.F > b.F;
}

void solve();

int main() {
    clock_t begin = clock();

    fast();
    customrun();
    ll t = 1;
    //cin>>t;
    //calculateprime();
    mfor(i,1,t+1,1)
    {
        //cout<<"Case #"<<i<<": \n";
        solve();
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    //cout<<"\ntime spent is "<<time_spent;
    return 0;
}


void solve(){
    ll n , res = 1e18;
    in(n);

    for(ll i = 1 ; i*i <= n ; i++){
        if(n % i == 0){
            res = min(res,i+(n/i)-2);
        }
    }

    if(res > n){
        out(res-1);
    }
    else{
        out(res);
    }
}
