#include <bits/stdc++.h>

using namespace std;
#define all(a)a.begin(),a.end()
using ll=long long;
const int INF = 1<<30;
const ll INFll =1LL<<62;
const int mod= int(1e9)+7;
using P = pair<ll,ll>;
using ld=long double;

int main(){
    int n,l;cin >>n>>l;
    vector<string>s(n);
    for (int i = 0; i < n; ++i) {
        cin >>s[i];
    }
    sort(all(s));
    string ans="";
    for (int i = 0; i < n; ++i) {
        ans+=s[i];
    }
    cout <<ans <<endl;
}
