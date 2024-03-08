//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;

typedef long long ll;
typedef vector<int> vint;
typedef vector<vector<int> > vvint;
typedef vector<long long> vll, vLL;
typedef vector<vector<long long> > vvll, vvLL;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) for(int i=0;i<n;++i)
#define mod (ll)(1e9+7)
#define FIX(a) ((a)%mod+mod)%mod
#define ALL(obj) (obj).begin(), (obj).end()
#define rALL(obj) (obj).rbegin(), (obj).rend()
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define fi first
#define se second
#define pb push_back
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vint rnk(n);
    vint sum(n+1);
    REP(i,n){
        int p;
        cin >> p;
        rnk[p-1] = i+1;
    }
    REP(i,n){
        sum[i+1] = sum[i]+rnk[i];
    }
    vint a(n);
    vint b(n);
    REP(i,n){
        a[i]=n-i;
        b[i]=i+1;
        a[i]+=sum[n]-sum[i];
        b[i]+=sum[i+1];
    }
    REP(i,n){
        cout << b[i] << ((i==n-1)?("\n"):(" "));
    }
    REP(i,n){
        cout << a[i] << ((i==n-1)?("\n"):(" "));
    }
    return 0;
}