#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using intpair=pair<int,int>;
using llpair=pair<ll,ll>;
using llvec=vector<ll>;
using llmat=vector<vector<ll>>;
#define llmattp(name,a,b,num) name(a,vector<ll>(b,num))
#define INTINF 1<<30
#define LLINF 1LL<<60
#define ABS(x) ( (x)>0 ? (x) : -(x) )

template<class T> inline bool chmin(T& a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}

template<class T> inline bool chmax(T& a, T b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
}

ll gcd(ll a, ll b) {
	if(a==0||b==0) return 0;
	if(a<b) swap(a,b);
	ll tmp = a%b;
	while(tmp!=0) {
		a = b;
		b = tmp;
		tmp = a%b;
	}
	return b;
}

ll factorial(ll x) {
	ll f=1;
	for(ll i=2; i<x; i++) {
		f*=i;
	}
	return f;
}

ll nPr(ll n, ll r) {
	ll result=1;
	for(ll i=r+1; i<=n; i++) result*=i;
	return result;
}

ll nCr(ll n, ll r) {
	if (n == r) { return 1; }
	if (r > n) { return 0; }

	if (r > n / 2) { r = n - r; }

	if (n == 0) { return 0; }
	if (r == 0) { return 1; }
	if (r == 1) { return n; }

	double result = 1;
	for (double i = 1; i <= r; i++) {
		result *= (n - i + 1) / i;
	}

	return (ll)result;
}

bool IsPrime(ll num) {
	if (num < 2) return false;
	else if (num == 2) return true;
	else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

	double sqrtNum = sqrt(num);
	for (ll i = 3; i <= sqrtNum; i += 2)
	{
		if (num % i == 0)
		{
			// 素数ではない
			return false;
		}
	}

	// 素数である
	return true;
}

ll GreaterBinarySearch(ll *array, ll key, ll max, ll min) {
	if(array[max]<array[min]) {
		return NULL;
	} else {
		ll mid = max + (min-max)/2;
		if(array[mid]<key) {
			return GreaterBinarySearch(array,key,max,mid-1);
		} if(array[mid]>key) {
			return GreaterBinarySearch(array,key,mid+1,min);
		} else {
			return mid;
		}
	}
}

bool Palind(string s) {
	return s == string(s.rbegin(), s.rend());
}

int main() {
	int N; cin>>N;
	int bA=0, BA=0, Ba=0;
	int result=0;
	for(int i=0; i<N; i++) {
		string S; cin>>S;
		int N=S.length();
		for(int i=0; i<N-1; i++) {
			if(S.at(i)=='A'&&S.at(i+1)=='B')
				result++;
		}
		if(S.at(0)=='B') {
			if(S.at(S.length()-1)=='A')
				BA++;
			else
				Ba++;
		}
		else if(S.at(S.length()-1)=='A')
			bA++;
	}

	if(BA) {
		result+=BA-1;
		if(bA) {
			result++;
			bA--;
		}
		if(Ba) {
			result++;
			Ba--;
		}
	}
	result+=min(bA,Ba);

	cout<<result<<endl;
}
