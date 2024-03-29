/*

*/
#include <bits/stdc++.h>

using namespace std;

#define ll           long long int
#define mp           make_pair
#define pb           push_back
#define fi           first
#define si           second
#define fastIO       ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F(a,n)       for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n)      for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n)       for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n)      for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define NF(a,n,m)    for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
#define NF1(a,n,m)   for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cin>>a[i][j];}}
#define PNF(a,n,m)   for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define PNF1(a,n,m)  for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
const int nax = 1e7;
const int mod = 1e9+7;
ll n, *ar, len1, len2, len3;

ll func(ll i, ll a, ll b, ll c){
	//base case
	if(i == n){
		ll diff = abs(len1-a) + abs(len2-b) + abs(len3-c);
		return (a == 0 || b == 0 || c == 0) ? INT_MAX : diff;
	}
	//recursive case
	ll op1 = a != 0 ? 10 + func(i+1, a+ar[i], b, c) : func(i+1, a+ar[i], b, c);
	ll op2 = b != 0 ? 10 + func(i+1, a, b+ar[i], c) : func(i+1, a, b+ar[i], c);
	ll op3 = c != 0 ? 10 + func(i+1, a, b, c+ar[i]) : func(i+1, a, b, c+ar[i]);
	ll op4 = func(i+1, a, b, c);

	return min(op1, min(op2, min(op3, op4)));
}

int main(){
fastIO
	cin>>n;
	cin>>len1>>len2>>len3;
	ar = new ll[n];
	F(ar, n);
	cout<<func(0, 0, 0, 0);
}