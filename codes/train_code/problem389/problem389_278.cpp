#include<bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define RE(i,n) for (int i = 1; i <= n; i++)
#define RED(i,n) for (int i = n; i > 0; i--)
#define REPS(i,n) for(int i = 1; (i*i) <= n; i++)
#define REP(i,n) for (int i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define REPD(i,n) for (int i = n-1; i >= 0; i--)
#define FORD(i,a,b) for (int i = a; i >= b; i--)
#define remax(a,b) a = max(a,b)
#define remin(a,b) a = min(a,b)
#define all(v) v.begin(),v.end()
#define pii pair<int,int>
#define mii map<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define WL(t) while(t --)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define print(arr) for (auto it = arr.begin(); it != arr.end(); ++it) cout << *it << " "; cout << endl;
#define debug(x) cout << x << endl;
#define debug2(x,y) cout << x << " " << y << endl;
#define debug3(x,y,z) cout << x << " " << y << " " << z << endl;
#define rep(i,a,n) for(int i=a; i<n; i++)
#define endl "\n"
#define E "\n"
#define show(arr) REP(i,arr.size()){cout<<arr[i]<<" ";}
const int INF = 1e18+1;
const int MOD = 1e9+7;
const double PI = 3.14159265358979323846264338;
const int MAX = 1e18;

#define N 5010

int sum(int x){
    int s=0;
    while(x>0){
        s+=x%10;
        x/=10;
    }
    return s;
}

void solve()
{
    int a,b,c,d,n;
    cin>>a>>b>>c>>d>>n;
    b = min(b,2*a);
    c = min(c,2*b);
    d = min(d,2*c);
    if (2*c<=d){
        cout<<n*c;
    }
    else {
        cout<<((n%2)?(n/2)*d+c:(n/2)*d);
    }
}

signed main()
{
    int t=1;
    //cin>>t;
    WL(t)solve();

    return 0;
}

