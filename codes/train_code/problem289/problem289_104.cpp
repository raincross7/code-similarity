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
    ll m,k;
    cin >> m >> k;
    ll ma = (1LL<<m);
    if(k>=ma){
        cout << -1 << endl;
        return 0;
    }
    if(m==0){
        if(k==0){
            printf("%d %d\n",0,0);
        }else{
            cout << -1 << endl;
        }
        return 0;
    }
    if(k==0){  
        for(ll i=0;i<ma;++i){
            cout << i << " " << i << ((i==ma-1)?("\n"):(" "));
        }
        return 0;
    }
    if(m==1){
        cout << -1 << endl;
        return 0;
    }
    for(ll i=0;i<ma;++i){
        if(i!=k){
            cout << i << " ";
        }       
    }
    cout << k << " ";
    for(ll i=ma-1;i>=0;--i){
        if(i!=k){
            cout << i << " ";
        }       
    }
    cout << k << endl;


    return 0;
}