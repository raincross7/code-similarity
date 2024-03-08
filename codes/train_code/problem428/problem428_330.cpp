#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,n) for(int i=0;i<(n);++i)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define all(x) (x).begin(), (x).end()
#define PI 3.14159265358979323846264338327950L
using namespace std;
typedef long long ll;
typedef long double ld;
int main() {
    string s;
    cin>>s;
    int n=s.size();
    map<char,int> mp;
    if(n==26){
        if(s=="zyxwvutsrqponmlkjihgfedcba") cout<<-1;
        else{
            string t=s;
            next_permutation(all(t));
            rep(i,n){
                cout<<t[i];
                if(s[i]!=t[i]) return 0;
            }
        }
    }
    else{
        rep(i,n) mp[s[i]]++;
        char c;
        for(c='a';c<='z';c++) if(mp[c]==0) break;
        cout<<s<<c;
    }
}