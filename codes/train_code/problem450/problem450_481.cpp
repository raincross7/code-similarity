#include <bits/stdc++.h>
 
#define vi vector<int>
#define tests int t; cin>>t; while(t--)
#define ll long long
#define vll vector<long long>
#define srt(v) sort(v.begin(), v.end())
#define srtg(v) sort(v.begin(), v.end(), greater<int> ())
#define FOR(k, n) for(int k=0; k<n; k++)
#define pb push_back
 
 
using namespace std;
using namespace std::chrono;
 
char nums[10] = { '0','1','2','3','4','5','6','7','8','9' };
char alphsl[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
const ll MOD = 1000000007;
char alphs[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
 

 
 
void solve() {
 
    int x, n;
    cin>>x>>n;
    vi v(n);
    for(auto& x : v) cin>>x;
    srt(v);
    set<int> s;
    for(int i=0; i<n; i++) s.insert(v[i]);
    int curr=0, p=1;
    while(p==1){
        if(s.count(x-curr)==0){
            cout<<x-curr<<endl;
            return;
        }
        if(s.count(x+curr)==0){
            cout<<x+curr<<endl;
            return;
        }
        curr++;
    }
    
}
   
   

 
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
        
        solve();
 
 
    return 0;
}