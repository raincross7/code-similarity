#include<bits/stdc++.h>
#define rep1(i,a,b) for(int i=(a);(i)<=(b);(i)++)
#define rep(i,a,b) for(int i=(a);(i)<(b);(i)++)
#define ll long long
#define N 200005
#define pql priority_queue<ll>
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define rev(a,n) reverse(a,a+n)
using namespace std;
int n,b;
ll ans;
int main() {
	cin>>n;
	vector<ll> a(n);
	rep(i,0,n) cin>>a[i];
	rep(i,0,n) a[i]-=i+1;
	sort(all(a));
	b=a[n/2];
	rep(i,0,n) ans+=abs(a[i]-b);
	cout<<ans;
	return 0;
}
