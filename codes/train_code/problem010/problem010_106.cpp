#include<iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define what_is(x) cerr << #x << " is " << x << endl;
#define MT make_tuple
#define eb emplace_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

#define REP(i,a,b) for (int i = a; i <= b; i++)
#define FOR(i,n) for (int i=0;i < n ; i++)
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}

int main(){
	int n;
	cin >> n;
	ll a[n];
	FOR(i,n) cin >>a[i];
	sort(a,a+n);
	int j=n-1;
	while(j>=1 && a[j]!=a[j-1]) j--;
	if(j==0) {
		cout <<0;
		return 0;
	}
	else {
		int k=j-2;
		while(k>=1 && a[k]!=a[k-1]) k--;
		if(k==0) {
			cout << 0;
			return 0;
		}
		else cout << a[j]*a[k];
	}

	return 0;
}