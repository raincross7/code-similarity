#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
using P = pair<int,int>;
const int INF = 1000100100;

/* 大文字を小文字に変換 */
char tolower(char c) {return (c + 0x20);}
/* 小文字を大文字に変換 */
char toupr(char c) {return (c - 0x20);}

// if('A'<=s[i] && s[i]<='Z') s[i] += 'a'-'A';

/*
string s = "abcdefg"
s.substr(4) "efg"
s.substr(0,3) "abc"
s.substr(2,4) "cdef"

// イテレータ要素のインデックス
distance(A.begin(), itr);
*/

int main()
{
    int n; cin >> n;
    int h[n];
    rep(i,n) cin >> h[i];

    int dp[n];
    rep(i,n) dp[i] = INF;
    dp[0] = 0;
    for(int i=1; i<n; i++){
        if(i == 1) dp[i] = dp[i-1] + abs(h[i]-h[i-1]);
        else{
            dp[i] = min(dp[i], min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2])));
        }
    }
    cout << dp[n-1] << endl;
}