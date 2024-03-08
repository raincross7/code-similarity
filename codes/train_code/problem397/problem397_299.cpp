/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
  Name:- OMHARI 
  Institution:- UNIVERSIT OF CALCUTTA(INFORMATION TECHNOLOGY)
  Email:- omharicu@gmail.com
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<bits/stdc++.h>
using namespace std; 

#define F               first
#define S               second
#define ull             unsigned long long
#define ll              long long
#define ul              unsigned long
#define db              double
#define ST              string
#define pb              push_back
#define mp              make_pair
#define el              "\n"
#define vll             vector <ll>
#define vl              vector <long int>
#define vi              vector <int>
#define all(v)          (v.begin(), v.end()) 
#define rall(v)         (v.rbegin(), v.rend()) 
#define is_sort(v)      is_sorted all(v)
#define max_of(v)       *max_element all(v)
#define min_of(v)       *min_element all(v)
#define itos(s)         to_string(s)
#define cntone(x)       __builtin_popcountll(x)
#define cntzro(x)       __builtin_clz(x)
#define For(i, a, b)    for(int i=a; i<b; i++)
#define Forr(i, a, b)   for(int i=a; i>=b; i--)
const ll mod = 1e9+7;

void solve()
{
    int n;
    cin>>n;
    vll v(n+1);

    For(i, 1, n+1)
    {
        ll j=(ll)i;
        while(j<=n)
        {
            v[j]++;
            j+=i;
        }
    }
    ll ans=0;

    For(i, 1, n+1)
    ans+=(ll)(i*v[i]);

    cout<<ans;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    /***************-Code starts from here-***************/
    // int t;
    // cin>>t;
    // while(t--)
    solve();
    return 0; 
} 