#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
#define int long long
#define MOD 1000000007
typedef vector<int> vi;
typedef pair<int,int> pi;
#define inf 1e18
#define For(i,a,b) for (int i = a; i < b; i++)
#define Rep(i,a,b) for (int i = a; i <= b; i++)
#define ps(x,y) fixed << setprecision(y) << x 
#define pb push_back 
#define mp make_pair 
 
int32_t main()
{
    fast;
    int a, b, c; cin >> a >> b >> c;
    for(int i = a; i <= a*b; i+=a) {
        if(i % b == c) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    
    
    
    return 0;
}