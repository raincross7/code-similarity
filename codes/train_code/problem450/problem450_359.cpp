#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#define initdp(a, b)  for (int i = 0; i <= a; i++)   for (int j = 0; j <= b; j++) dp[i][j] = -1;
#define fi first
#define se second
#define pb push_back
#define pii pair<int, int>
#define ll long long
#define pll pair<ll, ll>
#define all(arr) arr.begin(), arr.end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repd(i, n) for (int i = n - 1; i >= 0; i--)
#define fo(i, l, r) for (int i = l; i <= r; i++)
#define inf 1000000001
#define inf1 1000000000000000001
#define mod 1000000007
#define pie 3.14159265358979323846
#define N 1000005
#define mid(l, r) l + (r - l) / 2
#define vec vector<int>
#define vecl vector<ll>
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define umapi unordered_map<ll, ll>
#define umapc unordered_map<char, int>
#define endl "\n"
#define pui pair<int, pair<int,int> >
using namespace std;



/*
            ॐ
    || Jai Shree Ram ||  
 
 */

void solve(){
    
    int x, n;
    cin>>x>>n;

    set<int> st;
    for(int i=0; i<n; i++) {
        int z;
        cin>>z;
        st.insert(z);
    }

    bool found = false;
    int l= x;
    int r = x;

    while(!found) {
        if(st.find(l) == st.end() ) {
            cout<<l<<endl;
            return;
        }
        l--;
        if(st.find(r) == st.end()) {
            cout<<r<<endl;
            return;
        }
        r++;
    }



}

 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed<<setprecision(25);
    int t = 1;
    // //cin >> t;
    while (t--)
    {
        solve();
    }
}

