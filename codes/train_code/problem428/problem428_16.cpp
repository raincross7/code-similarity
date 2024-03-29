//
// ~oisín~ C++ Template
//

#include                <bits/stdc++.h>
#define MX_N            5001
#define INF             100000000
#define mod7            1000000007
#define modpi           314159
#define pb              push_back
#define FastIO          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define All(a)          a.begin(),a.end()
#define fi              first
#define se              second
#define ll              long long int
#define ull             unsigned long long int

int kx[8]  =            {+2, +2, -2, -2, +1, +1, -1, -1};
int ky[8]  =            {+1, -1, +1, -1, +2, -2, +2, -2};
int d9x[9] =            {+1, +1, +1, +0, +0, +0, -1, -1, -1};
int d9y[9] =            {+1, +0, -1, +1, +0, -1, +1, +0, -1};
int dx4[4] =            {+0, +0, +1, -1};
int dy4[4] =            {+1, -1, +0, +0};

ll gcd(ull a, ull b){
    return (a==0)?b:gcd(b%a,a);
}

ll lcm(ull a, ull b){
    return a*(b/gcd(a,b));
}

using namespace std;

int main(){
    string alph = "abcdefghijklmnopqrstuvwxyz";
    string bad = alph;
    reverse(bad.begin(), bad.end());
    string s;
    cin >> s;
    if(s==bad){
        cout << "-1\n";
        return 0;
    }
    bool b[26];
    memset(b, 0, sizeof(b));
    for(char c : s)
        b[(int)c-(int)'a'] = 1;
    for(int i=0;i<26;++i)
        if(!b[i]){
            s += (char)(i+(int)'a');
            cout << s << endl;
            return 0;
        }
    string v = s;
    next_permutation(v.begin(), v.end());
    for(int i=0;i<v.size();++i){
        if(v[i] != s[i]){
            cout << v[i] << endl;
            return 0;
        }else{
            cout << v[i];
        }
    }
}
