#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const ll mod=1000000007;
const int MAX_N = 1000;         // n の最大値
 
// nCk を取得
double nCk(int n, int k) {
double res=1.0;
for(int i=0; i<n; i++){
res*=0.5;}
for(int i=0; i<k; i++){
res*=(double)(n-i);
res/=(double)(k-i);
}
return res;}
 
int main() {
cout << fixed << setprecision(10);
ll n;
cin>>n;
double a[n]={};
double q=0;
for(ll i=0; i<n; i++){
cin>>a[i];}
sort(a,a+n);
q=(a[0]+a[1])/2;
for(ll i=2; i<n; i++){
q=(q+a[i])/2;}
cout<<q<<endl;}