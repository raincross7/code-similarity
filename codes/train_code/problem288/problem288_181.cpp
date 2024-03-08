#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
#include<bitset>

#define Vsort(a) sort(a.begin(), a.end())
#define Vreverse(a) reverse(a.bigin(), a.end())
#define Srep(n) for(int i = 0; i < (n); i++)
#define rep(i,n) for(int i = 0; i < (n); i++)
#define Lrep(i,a,n) for(int i = (a); i < (n); i++)
#define vi vector<int>
#define vi64 vector<int64_t>
#define vvi vector<vi>
#define vvi64 vector<vi64>

using namespace std;

int main() {
    int64_t n, ans = 0;
    cin >> n;
    vi64 a(n);
    Srep(n) cin >> a[i];
    rep(i,n-1){
        if(a[i] > a[i+1]){
            ans += a[i] - a[i+1];
            a[i+1] += a[i] - a[i+1];
        }
    }
    cout << ans << endl;
}