#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<cmath>
#include<bitset>
#define ll long long
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define FFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define RREP(i,n)  FFOR(i,0,n)
#define SORT(V) sort((V).begin(),(V).end())
#define INF ((1LL<<62)-(1LL<<31))
#define MOD 1000000007
using namespace std;

int main(){
  char A[20];
  for(int i=1; i<=12; ++i){
    cin>>A[i];
    cout<<A[i];
    if(i==4) cout<<" ";
  }
  cout<<endl;
}
