#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main() {
    ll a,b; cin>>a>>b;
    cout<<a*b/(__gcd(a,b));
	return 0;
}