#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define f(i,a,b,c) for(ll i=a;i<b;i+=c)
#define r(i,a,b,c) for(ll i=a;i>=b;i-=c)
#define mod 1000000007
int main(){
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s; cin >> s;
    if(s=="AAA" || s == "BBB") cout << "No";
    else cout << "Yes";
    return 0;
}