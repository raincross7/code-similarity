#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for( int i = 0; i < n; i++ )
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define INF 2000000000
#define mod 1000000007
#define INF2 1000000000000000000

int n, k, s, ans, a[5005];
int main(void){

    cin.tie(0);
    ios::sync_with_stdio(false);
	int i;
	cin >> n >> k;
	for(i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);

	for( i = n-1; i >= 0; i--){

		if( s + a[i] >= k) ans = 0;

		else{
            ans++;
            s += a[i];
        }
	}
	cout << ans;

    return 0;
}