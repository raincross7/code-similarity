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
 
    int x,y;
    cin>>x>>y;
    if(!(y>=2*x&&4*x>=y)){
        cout<<"No"<<endl;
        return;
    }
   
    if((y-(2*x))%2==0 && ((4*x)-y)%2==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
 
}
   
   

 
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
        
        solve();
 
 
    return 0;
}