/*****And nothing else matters!******/

#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415926535
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
#define llu unsigned long long
#define setbits(x) __builtin_popcountll(x)
#define pb push_back
#define mp make_pair
#define sz(x) (int)x.size()
#define tc int test_case; cin >> test_case; while(test_case--)
#define f(i,a,n) for(int i = a ; i < n ; i++)
#define rf(i,n,a) for(int i = n-1 ; i >= a ; i--)
#define F first
#define S second
#define all(c) (c).begin(),(c).end()
#define get(a,n) f(i,0,n) cin >> a[i];
#define show(a,n) f(i,0,n) cout << a[i] << " "; cout << endl;
#define sp(x) fixed << setprecision(10) << x
#define fast ios:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define trace(x) cerr << '>' << #x << ':' << (x) << "\n"
#define trace2(x,y) cerr<< '>' << #x << ':' << (x) << " | " << #y << ':' << (y) << "\n"
#define trace3(a,b,c) cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<"\n"
#define trace4(a,b,c,d) cerr<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<"\n"

typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<pii,int> ppi;
typedef vector<pii> vpi;
typedef map<int,int> mii;
typedef map<ll,ll> mll;

const int inf = 1e9;
const ll inf64 = 1e18;
const int mod = inf + 7;
const int N = 2e5 + 10;

int main()
{
    fast;
    int n;
    cin >> n;
    bool ok = false;
    while(n)
    {
        if(n % 10 == 7)
            ok = true;
        n /= 10;
    }
    ok ? cout << "Yes" : cout << "No";
}
