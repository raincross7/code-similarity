#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define piii pair<int,pii>
#define pll pair<ll,ll>
#define plii pair<ll,pii>
#define vi vector<int>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define SORT(x) sort(x.begin(), x.end())
#define GSORT(x) sort(x.begin(), x.end(), greater<int>())
#define lw(vc,num) lower_bound(vc.begin(), vc.end(), num) - vc.begin();
#define hg(vc,num) upper_bound(vc.begin(), vc.end(), num) - vc.begin();
#define bn(v,x) binary_search (v.begin(), v.end(), x)
#define mx 100001
#define eps 0.00000000001
#define mod 1000000007
#define pi acos(-1)
#define inf 100000000
#define loop(i,b,n) for(int i=b;i<n;++i)
#define rev_loop(i,b,n) for(int i=b;i>=n;--i)
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool isprime(int n)
{
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i=5; i*i<=n; i+=6){
        if((n%i == 0)||(n%(i+2) == 0)) return false;
    }
    return true;
}
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
ll ncr(ll x, ll y) {
	ll ans = 1;
	for (ll i = 1; i <= y; ++i) {
		ans *= (x - y + i);
		ans /= i;
	}

	return ans;
}
int main()
{
    fio;
 ll a,b,k;
	cin>>a>>b>>k;
	if(a+b<=k)
	{
		cout<<"0"<<" "<<"0";
	}
  else if(k>=a)
	{
		k = k-a;
		a = 0;
		b = abs(k-b);
		cout<<"0"<<" "<<b;
	}
	else
	{
		a = a-k;
		cout<<a<<" "<<b;
	}
    return 0;
}

