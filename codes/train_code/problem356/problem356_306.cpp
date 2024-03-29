#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ITR(x,c) for(__typeof(c.begin()) x=c.begin();x!=c.end();x++)
#define RITR(x,c) for(__typeof(c.rbegin()) x=c.rbegin();x!=c.rend();x++)
#define setp(n) fixed << setprecision(n)

#define lf double
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>

#define all(a) (a.begin()),(a.end())
#define rall(a) (a.rbegin()),(a.rend())
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ins insert

using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n; cin>>n;
	vi A(n);
	rep(i, n){
		int a; cin>>a;
		A[a-1]++;
	}
	sort(all(A));
	vll sum(n+1);
	sum[0] = 0;
	rep(i, n) sum[i+1]=sum[i]+A[i];

	for(int k=1; k<=n; k++){
		int left=0, right=n/k+1;
		while(right-left>1){
			int mid = (left+right)/2;
			int idx = lower_bound(A.begin(), A.end(), mid)-A.begin();
			ll f = sum[idx] + mid*(n-idx);
			if (f>=mid*k){
				left = mid;
			}else{
				right = mid;
			}
		}
		cout << left << "\n";
	}
	return 0;
}
