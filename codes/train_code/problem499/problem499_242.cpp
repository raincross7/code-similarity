#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <math.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using pint = pair<int,int>;
using vec = vector<int>;
using ll=long long;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }


int main() {
    int n;cin>>n;
    map<string,int> mp;
    rep(i,n){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        mp[s]++;
    }

    ll ans= 0;
    for(auto& p: mp){
        int s = p.second;
        ans += (ll)s*(s-1)/2;
    }

    cout<< ans << endl;
    return 0;
}