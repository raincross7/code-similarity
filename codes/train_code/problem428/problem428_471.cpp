#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i = 0;i < n;i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define For(i, s, e) for(int i = s;i <= e;i++)
#define Sort(v, n) sort(v, v+n);
#define VSort(v) sort(v.begin(), v.end());
#define ll long long
#define pb(a) push_back(a)
#define INF 999999999
#define cY cout<<"Yes";
#define cN cout<<"No";
#define cA(a) cout<<a;
const ll MOD = 1000000007;

int main() {
    string s;cin>>s;
    if(s.size()<26) {
        int a[26];
        rep(i,26) {
            a[i] = 0;
        }
        rep(i,s.size()) {
            a[s[i]-'a']++;
        }
        rep(i,26) {
            if(a[i] == 0) {
                cout << s;
                printf("%c",'a' + i);
                return 0;
            }
        }
    } else if (s == "zyxwvutsrqponmlkjihgfedcba"){
        cout << -1;
    } else {
        int left;
        for(int i = 24;i>=0;i--) {
            if(s[i] <s[i+1]) {
                left = i+1;
                i = -1;
            }
        }
        int a[26];
        rep(i,26) {
            a[i] = 0;
        }
        for(int i = left;i<26;i++) {
            if(s[left-1]<s[i])a[s[i]-'a']++;
        }
        rep(i,left-1) {
            cout << s[i];
        }
        rep(i,26) {
            if(a[i] != 0) {
                printf("%c",'a'+i);
                return 0;
            }
        }
    }
}
