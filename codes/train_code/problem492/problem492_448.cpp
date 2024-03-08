#include <bits/stdc++.h>
using namespace std;
 
using ll=long long;
 
#define rng(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,b) rng(i,0,b)
#define gnr(i,a,b) for(int i=int(b)-1;i>=int(a);i--)
#define per(i,b) gnr(i,0,b)
#define pb push_back
#define eb emplace_back
#define a first
#define b second
#define bg begin()
#define ed end()
#define all(x) x.bg,x.ed
const ll MOD = 1e9 + 7;

int main() {
    int n; 
    cin >> n;
    string s; 
    cin >> s;
    int oc = 0, cc = 0; 
    for (char c : s) {
        if (c == '(') {
            ++oc;
        } else {
            if (oc > 0) --oc;
            else ++cc;
        }
    } 
    string head(cc, '(');
    s = head + s;
    oc = 0; cc = 0; 
    per(i, s.size()) {
        char c = s[i];
        if (c == ')') {
            ++oc;
        } else {
            if (oc > 0) --oc;
            else ++cc;
        }
    } 
    string tail(cc,')');
    s += tail;
    cout << s << endl;
    return 0;
}