#include <stdio.h>  
#include <algorithm>  
#include <assert.h>
#include <bitset>
#include <cmath>  
#include <complex>  
#include <deque>  
#include <functional>  
#include <iostream>  
#include <limits.h>  
#include <map>  
#include <math.h>  
#include <queue>  
#include <deque>
#include <set>  
#include <stdlib.h>  
#include <string.h>  
#include <string>  
#include <time.h>  
#include <unordered_map>  
#include <unordered_set>  
#include <vector>  
#include <chrono>
#include <random>
#include <time.h>
#include <fstream>
#define ll long long
#define rep2(i,a,b) for(ll i=a;i<=b;++i)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep3(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pq priority_queue<int>
#define pqg priority_queue<int,vector<int>,greater<int>>
#define pb push_back
#define vec vector<int>
#define vecll vector<ll>
#define vecpii vector<pii>
#define endl "\n"
#define all(c) begin(c),end(c)
using namespace std;
int in() {int x;scanf("%d",&x);return x;}
ll lin() {ll x;scanf("%lld",&x);return x;}
void print(vec v){for(auto e:v)cout<<e<<" ";cout<<endl;}
void print(vecll v){for(auto e:v)cout<<e<<" ";cout<<endl;}
void print(map<int,int> mp){for(auto e:mp)cout<<e.first<<" "<<e.second<<endl;cout<<endl;}


#define INF 1e9+7
#define LLINF 1e18+7
#define N 250000

const ll MOD=998244353;

main(){
    int n=in(),k=in();
    vecll a;
    rep(i,n){
        a.pb(in());
    }
    ll ans=0;
    vecll l,r;
    l.pb(0);
    rep(i,n){
        l.pb(l.back()+max(0ll,a[i]));
    }
    r.pb(0);
    rep3(i,n-1,0)r.pb(r.back()+max(0ll,a[i]));
    reverse(all(r));
    ll tmp=0;
    rep(i,k)tmp+=a[i];
    rep(i,n-k+1){
        ans=max(ans,max(0ll,tmp)+l[i]+r[i+k]);
        tmp-=a[i];
        tmp+=a[i+k];
    }
    // print(l);print(r);
    cout<<ans;
}