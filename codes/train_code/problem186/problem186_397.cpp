#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e6 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int main()
{
    assem99
    int n, k; cin>>n>>k;
    for(int i = 0; i < n; i++)
    {
        int a; cin>>a;
    }
    int i = k, ans = 1;
    while(i < n)
    {
        i += (k - 1);
        ans ++;
    }
    cout<<ans;

    return 0;
}