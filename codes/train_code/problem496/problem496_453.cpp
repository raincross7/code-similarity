#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
int main()
{
  ll n,k; cin >> n >> k;
  vector<ll> data(n); REP(i,n) cin >> data[i];
  ll sum=0; 
  sort(ALL(data),greater<int>());
  REP(i,min(k,n)){
    data[i] = 0;
  }
  REP(i,n){
    sum += data[i];
  }
  cout << sum << endl;
}