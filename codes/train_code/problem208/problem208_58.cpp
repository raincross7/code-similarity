/**Coder Khỏe ♥♥♥ Code Vui**/
#include<bits/stdc++.h> 
  
using namespace std; 
  
#define ii pair<int, int> 
#define li pair<long long, int> 
#define si pair<string, int> 
#define is pair<int, string> 
#define ci pair<char, int> 
#define ic pair<int, char> 
#define iii pair<pair<int, int>, int> 
#define fi first 
#define se second 
#define FOR(i,x,y) for (int i=x; i<=y; i++) 
#define FOD(i,x,y) for (int i=x; i>=y; i--) 
  
const int oo=1e9+9; 
const int nmax=1e6+9; 
const int cot[4]={0, 0, -1, 1}; 
const int dong[4]={-1, 1, 0, 0}; 
long long k; 
long long a[59]; 
//------------------------------------------ 
int main() 
{ 
    ios::sync_with_stdio(false); cin.tie(0); 
    //freopen("text.inp",  "r", stdin); 
    //freopen("text.out", "w", stdout); 
    cin>>k; 
    FOR(i,1,50) 
        a[i]=49+k/50; 
    k%=50; 
    FOR(i,1,k) 
    { 
        a[i]+=50+1; 
        FOR(j,1,50) a[j]--; 
    } 
    cout<<50<<endl; 
    FOR(i,1,50) 
    { 
        cout<<a[i]<<' '; 
    } 
    return 0; 
} 
/**NXKhang ♥ VNgHT**/