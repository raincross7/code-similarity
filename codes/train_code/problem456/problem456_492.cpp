#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> s(n);
    rep(i,n){
        int a;
        cin >> a;
        s[i] = make_pair(a,i+1);
    }
    sort(s.begin(), s.end());
    rep(i,n) cout << s[i].second << ' ';
}